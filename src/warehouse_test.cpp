#include "include/warehouse.hpp"
#include "employee.cpp"
#include "shelf.cpp"


Warehouse::Warehouse() {}

void Warehouse::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void Warehouse::addShelf(const Shelf& shelf) {
    shelves.push_back(shelf);
}


/**
 * @brief Rearranges the pallets on the given shelf in ascending order of itemCount.
 * 
 * This method requires an available employee with a forklift certificate.
 * The pallets on the shelf are sorted based on the itemCount of each pallet,
 * arranging them in ascending order. The shelf is modified in-place.
 * 
 * @param shelf The shelf to be rearranged.
 * @return True if the shelf was successfully rearranged, false otherwise.
 */
bool Warehouse::rearrangeShelf(Shelf& shelf) {

    for (auto& employee : employees) {
        if (!employee.getBusy() && employee.getForkliftCertificate()) {

            for (int i = 0; i < 4; ++i) {

                for (int j = 0; j < 4 - i - 1; ++j) {
                    if (shelf.swapPallet(j, j + 1)) {
                        if (shelf.pallets[j].getItemCount() > shelf.pallets[j + 1].getItemCount()) {
                            shelf.swapPallet(j, j + 1);
                        }
                    }
                }
            }
            employee.setBusy(true);
            return true;
        }
    }
    return false;
}


/**
 * @brief Picks a specified number of items from the pallets in the warehouse.
 *
 * This method attempts to pick the specified number of items with the given itemName from the pallets in the warehouse. 
 * It will iterate over each shelf and its pallets, and use the `takeOne()` method of the Pallet class to remove items from the pallets.
 * The picking process will continue until the required number of items have been picked or until there are no more items available in the warehouse.
 *
 * @param itemName The name of the item to pick.
 * @param itemCount The number of items to pick.
 * @return True if the required number of items were successfully picked, false otherwise.
 */
bool Warehouse::pickItems(const std::string& itemName, int itemCount) {
    int remainingItems = itemCount;

    for (auto& shelf : shelves) {

        for (auto& pallet : shelf.pallets) {

            if (pallet.getItemName() == itemName) {
                int itemsToPick = std::min(pallet.getItemCount(), remainingItems);

                for (int i = 0; i < itemsToPick; ++i) {
                    if (!pallet.takeOne()) {
                        return false;
                    }
                }
                remainingItems -= itemsToPick;
            }
            if (remainingItems <= 0) {
                return true;
            }
        }
    }
    return false;
}
