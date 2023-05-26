#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "include/catch.hpp"
#include "../src/include/warehouse.hpp"
#include "testWarehouse.cpp"


// Find all tests in test*.cpp in test/

// Create warehouse object for testing
Warehouse warehouse = createMockWarehouse();


/**
 * @brief Testcase 1, pickItems
 */
TEST_CASE("Testcase 1, pickItems", "[Warehouse::pickItems]"){

    // Pick 30 books
    std::string itemName = "Books";
    int itemCount = 30;
    bool successful = warehouse.pickItems(itemName, itemCount);
    REQUIRE(successful == true);
    REQUIRE(warehouse.shelves[0].pallets[0].getItemCount() == 70);
    REQUIRE(warehouse.shelves[0].pallets[1].getItemCount() == 70);
}


/**
 * @brief Testcase 2, getRemainingSpace
 */
TEST_CASE("Testcase 2, getRemainingSpace", "[Warehouse::getRemainingSpace]"){
    
    // Get remaining space of pallet on shelf
    int remainingSpace = warehouse.shelves[0].pallets[0].getRemainingSpace();
    REQUIRE(remainingSpace == 30);
}


/**
 * @brief Testcase 3, Try to rearrange a shelf with employee without forkliftCertificate
 */
TEST_CASE("Testcase 3, ForkliftCertificate check", "[Warehouse::rearrangeShelf]"){
    
    // Create employee without forkliftCertificate
    Employee employee("John", false);

    // Set employee in warehouse
    warehouse.addEmployee(employee);

    // Try to rearrange shelf with employee without forkliftCertificate
    bool successful = warehouse.rearrangeShelf(warehouse.shelves[0]);
    REQUIRE(successful == false);
}