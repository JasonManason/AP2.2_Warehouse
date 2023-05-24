#include "include/employee.hpp"


Employee::Employee(const std::string& name, bool forkliftCertificate)
    : name(name), forkliftCertificate(forkliftCertificate), busy(false) {}

std::string Employee::getName() const {
    return name;
}

bool Employee::getBusy() {
    return busy;
}

void Employee::setBusy(bool busy) {
    this->busy = busy;
}

bool Employee::getForkliftCertificate() const {
    return forkliftCertificate;
}

void Employee::setForkliftCertificate(bool forkliftCertificate) {
    this->forkliftCertificate = forkliftCertificate;
}