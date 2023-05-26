#include "include/employee.hpp"

/**
 * @brief Construct a new Employee:: Employee object
 * 
 * @param name The name of the employee.
 * @param forkliftCertificate If the employee has a forklift certificate.
 */
Employee::Employee(const std::string& name, bool forkliftCertificate)
    : name(name), forkliftCertificate(forkliftCertificate), busy(false) {}


/**
 * @brief Returns the name of the employee.
 * 
 * @return std::string name of the employee.
 */
std::string Employee::getName() const {
    return name;
}


/** 
 * @brief Returns the busy status of the employee.
 * 
 * @return True if the employee is busy, false otherwise.
*/
bool Employee::getBusy() {
    return busy;
}


/**
 * @brief Sets the busy status of the employee.
 * 
 * @param busy The busy status of the employee.
 */
void Employee::setBusy(bool busy) {
    this->busy = busy;
}


/**
 * @brief Returns the forklift certificate status of the employee.
 * 
 * @return true or false depending on if the employee has a forklift certificate.
 */
bool Employee::getForkliftCertificate() const {
    return forkliftCertificate;
}

/**
 * @brief Sets the forklift certificate status of the employee.
 * 
 * @param forkliftCertificate The forklift certificate status of the employee.
 */
void Employee::setForkliftCertificate(bool forkliftCertificate) {
    this->forkliftCertificate = forkliftCertificate;
}