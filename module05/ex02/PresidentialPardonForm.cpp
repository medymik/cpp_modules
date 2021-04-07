#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() {
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) {
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs) {
    (void)rhs;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target):
    Form::Form("PresidentialPardonForm", 25, 5, target) {
}

void PresidentialPardonForm::action() const {
    std::cout << "<" << this->getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}