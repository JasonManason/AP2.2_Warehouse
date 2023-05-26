#include "IContainer.hpp"
#include "Pallet.hpp"
#include <array>

class Shelf : public IContainer {
    // private:
    //     std::array<Pallet, 4> pallets;

    public:
        std::array<Pallet, 4> pallets;
        Shelf();
        bool swapPallet(int slot, int slot2);

        // Interface methods
        bool isEmpty() override;
        bool isFull() override;
};