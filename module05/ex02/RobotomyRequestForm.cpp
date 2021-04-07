#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() {
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) {
    *this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs) {
    (void)rhs;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target):
    Form::Form("RobotomyRequestForm", 72, 45, target) {
}

void RobotomyRequestForm::action() const {
    srand(time(NULL));
    switch (rand() % 2)
    {
    case 0:
        std::cout << "<" << this->getTarget() << "> has been robotomized successfully 50% of the time." << std::endl;
        break;
    default:
        std::cout << "<" << this->getTarget() << "> has been robotomized successfully 50% of the time." << std::endl;
        break;
    }
    std::cout << "drill drill drill drill" << std::endl;
	std::cout << "drill drill drill drill" << std::endl;
}