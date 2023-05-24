#include <iostream>
#include <string>


class Pallet {
    private:
        std::string itemName;
        int itemCapacity;
        int itemCount;

    public:
        Pallet(const std::string& itemName, int itemCapacity, int itemCount);
        Pallet();

        std::string getItemName() const;
        int getItemCount() const;
        int getRemainingSpace() const;

        bool reallocateEmptyPallet(const std::string& itemName, int itemCapacity);
        bool takeOne();
        bool putOne();
};