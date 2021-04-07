#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) {
    *this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs) {
    (void)rhs;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target):
    Form::Form("ShrubberyCreationForm", 145, 137, target) {
}

void ShrubberyCreationForm::action() const {
    std::string filename;
    filename = this->getTarget();
    filename = filename.append("_shrubbery");
    std::ofstream file(filename);
	if (!file.good()) {
		std::cout << "Can't create the file" << std::endl;
		return ;
	}
	file << "       **** \n     ******** \n    **  ****** \n     *   ******     ****** \n         ******   ********* \n          ****  *****   *** \n          ***  ***     ** \n    *************       * \n  ****************** \n *****   H*****H******* \n ***     H-___-H  ********* \n  ***    H     H      ******* \n   **    H-___-H        ***** \n     *   H     H         **** \n         H     H         *** \n         H-___-H         ** \n         H     H         * \n         H-___-H \n         ALOHA!!" << std::endl;
	file.close();
}