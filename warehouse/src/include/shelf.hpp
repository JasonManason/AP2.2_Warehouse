#include <array>
#include "pallet.cpp"


class Shelf {
    // private:
    //     std::array<Pallet, 4> pallets;

    public:
        std::array<Pallet, 4> pallets;
        Shelf();
        bool swapPallet(int slot, int slot2);
};