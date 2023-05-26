#include "include/pallet.hpp"


/**
 * @brief Construct a new Pallet:: Pallet object
 * 
 * @param itemName The name of the item in the pallet.
 * @param itemCapacity The capacity of the pallet.
 * @param itemCount The item count of the pallet.
 */
Pallet::Pallet(const std::string& itemName, int itemCapacity, int itemCount)
    : itemName(itemName), itemCapacity(itemCapacity), itemCount(itemCount) {}


/**
 * @brief Construct a new Pallet:: Pallet object that is empty.
 */
Pallet::Pallet()
    : itemCapacity(0), itemCount(0) {}


/**
 * @brief Returns the name of the item in the pallet.
 * 
 * @return std::string 
 */
std::string Pallet::getItemName() {
    return itemName;
}


/**
 * @brief Returns the item count of the pallet.
 * 
 * @return The item count of the pallet.
 */
int Pallet::getItemCount() {
    return itemCount;
}


/**
 * @brief Returns the remaining space of the pallet.
 * 
 * @return The remaining space of the pallet.
 */
int Pallet::getRemainingSpace() {
    return itemCapacity - itemCount;
}


/**
 * @brief Reallocates an empty pallet.
 * 
 * @param itemName The name of the item in the pallet.
 * @param itemCapacity The capacity of the pallet.
 * @return true or false depending on if the pallet was reallocated. 
 */
bool Pallet::reallocateEmptyPallet(const std::string& itemName, int itemCapacity) {
    if (itemCount == 0) {
        this->itemName = itemName;
        this->itemCapacity = itemCapacity;
        return true;
    }
    return false;
}


/**
 * @brief Takes one item from the pallet.
 * 
 * @return true or false depending on if the item was taken.
 */
bool Pallet::takeOne() {
    if (itemCount > 0) {
        itemCount--;
        return true;
    }
    return false;
}


/**
 * @brief Puts one item on the pallet.
 * 
 * @return true or false depending on if the item was put on the pallet. 
 */
bool Pallet::putOne() {
    if (itemCount < itemCapacity) {
        itemCount++;
        return true;
    }
    return false;
}


/**
 * @brief Returns if the pallet is empty.
 * 
 * @return true or false depending on if the pallet is empty.
 */
bool Pallet::isEmpty() {
    return itemCount == 0;
}


/**
 * @brief Returns if the pallet is full.
 * 
 * @return true or false depending on if the pallet is full.
 */
bool Pallet::isFull() {
    return itemCount == itemCapacity;
}