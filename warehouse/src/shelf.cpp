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