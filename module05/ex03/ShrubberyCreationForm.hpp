#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <iostream>

class ShrubberyCreationForm : public Form {
    private:

    public:
        ShrubberyCreationForm();
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const& src);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

        ShrubberyCreationForm(std::string const& target);
        void    action() const;

};
#endif