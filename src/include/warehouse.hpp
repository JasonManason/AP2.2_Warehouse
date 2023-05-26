#include <iostream>
#include <vector>
#include "employee.hpp"
#include "shelf.hpp"

class Warehouse {

    public:
        Warehouse();
        
        std::vector<Employee> employees;
        std::vector<Shelf> shelves;

        void addEmployee(Employee& employee);
        void addShelf(Shelf& shelf);
        bool rearrangeShelf(Shelf& shelf);
        bool pickItems(std::string& itemName, int itemCount);
};