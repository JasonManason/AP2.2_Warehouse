#include "include/shelf.hpp"
#include <algorithm>

/**
 * @brief Construct a new Shelf:: Shelf object
 * 
 * This constructor is empty because the pallets are initialized in the header file.
 */
Shelf::Shelf() {}

bool Shelf::swapPallet(int slot, int slot2) {
    if (slot >= 0 && slot < 4 && slot2 >= 0 && slot2 < 4) {
        std::swap(pallets[slot], pallets[slot2]);
        return true;
    }
    return false;
}


/**
 * @brief Checks if the shelf is empty.
 * 
 * @return true or false depending on whether the shelf is empty.
 */
bool Shelf::isEmpty() {
    for (int i = 0; i < 4; i++) {
        if (!pallets[i].isEmpty()) {
            return false;
        }
    }
    return true;
}


/**
 * @brief Checks if the shelf is full.
 * 
 * @return true or false depending on whether the shelf is full. 
 */
bool Shelf::isFull() {
    for (int i = 0; i < 4; i++) {
        if (!pallets[i].isFull()) {
            return false;
        }
    }
    return true;
}