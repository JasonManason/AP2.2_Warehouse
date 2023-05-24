#include "include/warehouse.hpp"
#include "employee.cpp"
#include "shelf.cpp"


Warehouse::Warehouse() {}

void Warehouse::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void Warehouse::addShelf(const Shelf& shelf) {
    shelves.push_back(shelf);
}


bool Warehouse::rearrangeShelf(Shelf& shelf) {
    return true; // Temporary value
}


bool Warehouse::pickItems(const std::string& itemName, int itemCount) {
    return true; // Temporary value
}