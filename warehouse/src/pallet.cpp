#include "include/pallet.hpp"


Pallet::Pallet(const std::string& itemName, int itemCapacity, int itemCount)
    : itemName(itemName), itemCapacity(itemCapacity), itemCount(itemCount) {}

Pallet::Pallet()
    : itemCapacity(0), itemCount(0) {}

std::string Pallet::getItemName() const {
    return itemName;
}

int Pallet::getItemCount() const {
    return itemCount;
}

int Pallet::getRemainingSpace() const {
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