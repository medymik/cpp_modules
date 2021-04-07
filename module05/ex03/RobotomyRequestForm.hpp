#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:

    public:
        RobotomyRequestForm();
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const& src);
        RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

        RobotomyRequestForm(std::string const& target);
        void    action() const;
};
#endif