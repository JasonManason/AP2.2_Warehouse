#include "IContainer.hpp"
#include <string>

class Pallet : public IContainer {
    
    private:
        std::string itemName;
        int itemCapacity;
        int itemCount;

    public:
        Pallet(const std::string& itemName, int itemCapacity, int itemCount);
        Pallet();

        std::string getItemName();
        int getItemCount();
        int getRemainingSpace();
        bool reallocateEmptyPallet(const std::string& itemName, int itemCapacity);
        bool takeOne();
        bool putOne();

        // Interface methods
        bool isEmpty() override;
        bool isFull() override;
};