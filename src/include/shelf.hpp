// #include "IContainer.hpp"
#include "pallet.hpp"
#include <array>

class Shelf : public IContainer {

    public:
        std::array<Pallet, 4> pallets;
        Shelf();
        bool swapPallet(int slot, int slot2);

        // Interface methods
        bool isEmpty() override;
        bool isFull() override;
};