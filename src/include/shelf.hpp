#include "pallet.hpp"
#include <array>

class Shelf : public IContainer {

    public: 
        Shelf();

        std::array<Pallet, 4> pallets;
        bool swapPallet(int slot, int slot2);
        void addPallet(int slot, Pallet pallet);

        // Interface methods
        bool isEmpty() override;
        bool isFull() override;
};