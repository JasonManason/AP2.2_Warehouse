#include "include/shelf.hpp"
#include <algorithm>


Shelf::Shelf() {}

bool Shelf::swapPallet(int slot, int slot2) {
    if (slot >= 0 && slot < 4 && slot2 >= 0 && slot2 < 4) {
        std::swap(pallets[slot], pallets[slot2]);
        return true;
    }
    return false;
}

bool Shelf::isEmpty() {
    for (int i = 0; i < 4; i++) {
        if (!pallets[i].isEmpty()) {
            return false;
        }
    }
    return true;
}

bool Shelf::isFull() {
    for (int i = 0; i < 4; i++) {
        if (!pallets[i].isFull()) {
            return false;
        }
    }
    return true;
}