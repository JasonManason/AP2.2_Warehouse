#include <iostream>
#include <vector>
#include "include/employee.hpp"
#include "include/shelf.hpp"

class Warehouse {

    public:
        Warehouse();
        std::vector<Employee> employees;
        std::vector<Shelf> shelves;

        void addEmployee(const Employee& employee);
        void addShelf(const Shelf& shelf);
        bool rearrangeShelf(Shelf& shelf);
        bool pickItems(const std::string& itemName, int itemCount);
};