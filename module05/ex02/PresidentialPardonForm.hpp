#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm: public Form {
    public:
        PresidentialPardonForm();
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const& src);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

        PresidentialPardonForm(std::string const& target);
        void    action() const;
};

#endif