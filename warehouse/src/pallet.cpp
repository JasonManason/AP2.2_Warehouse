#include "include/pallet.hpp"


Pallet::Pallet(const std::string& itemName, int itemCapacity, int itemCount)
    : itemName(itemName), itemCapacity(itemCapacity), itemCount(itemCount) {}

Pallet::Pallet()
    : itemCapacity(0), itemCount(0) {}

std::string Pallet::getItemName() {
    return itemName;
}

int Pallet::getItemCount() {
    return itemCount;
}

int Pallet::getRemainingSpace() {
    return itemCapacity - itemCount;
}

bool Pallet::reallocateEmptyPallet(const std::string& itemName, int itemCapacity) {
    if (itemCount == 0) {
        this->itemName = itemName;
        this->itemCapacity = itemCapacity;
        return true;
    }
    return false;
}

bool Pallet::takeOne() {
    if (itemCount > 0) {
        itemCount--;
        return true;
    }
    return false;
}

bool Pallet::putOne() {
    if (itemCount < itemCapacity) {
        itemCount++;
        return true;
    }
    return false;
}

bool Pallet::isEmpty() {
    return itemCount == 0;
}

bool Pallet::isFull() {
    return itemCount == itemCapacity;
}