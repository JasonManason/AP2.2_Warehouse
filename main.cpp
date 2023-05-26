#include <iostream>
#include "src/include/warehouse.hpp"

int main(void){
    // std::cout << "Hello world" << std::endl;

    // Create a warehouse
    Warehouse warehouse;

    // Create employees
    Employee employee1("John", true);
    Employee employee2("Jane", false);

    // Add employees to warehouse
    warehouse.addEmployee(employee1);
    warehouse.addEmployee(employee2);

    // Create empty shelve
    Shelf shelf1;

    // Add shelf to warehouse
    warehouse.addShelf(shelf1);

    // Create pallets with books
    Pallet pallet1("Books", 100, 20);
    Pallet pallet2("Books", 100, 40);

    // Add pallets to shelf
    warehouse.shelves[0].addPallet(0, pallet1);
    warehouse.shelves[0].addPallet(1, pallet2);

    // Rearrange the first and only shelf of the warehouse.
    bool successful = warehouse.rearrangeShelf(warehouse.shelves[0]);
    // Should be successful
    std::cout << "Rearrangement successful: " << successful << std::endl;

    // Check if shelf is now correctly arranged.
    // Shelf should now be arranged.
    std::cout << "Pallet 1 item count: " << warehouse.shelves[0].pallets[0].getItemName() << std::endl;
    std::cout << "Pallet 2 item count: " << warehouse.shelves[0].pallets[1].getItemName() << std::endl;

    // Pick items from shelf
    std::string itemName = "Books";
    int itemCount = 30;
    successful = warehouse.pickItems(itemName, itemCount);
    // Should be successful
    std::cout << "Pick items successful: " << successful << std::endl;
}