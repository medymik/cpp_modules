#include "Squad.hpp"

Squad::~Squad() {
    while (this->lst) {
        t_list *prev = this->lst;
        this->lst = this->lst->next;
        delete prev->item;
        delete prev;
    }
}

int Squad::getCount() const {
    return this->count;
}

ISpaceMarine* Squad::getUnit(int index) const {
    t_list *tmp = this->lst;
    int i = 0;
    while (tmp) {
        if (i == index) {
            return tmp->item;
        }
        tmp = tmp->next;
        i++;
    }
    return NULL;
}

int Squad::push(ISpaceMarine* marine) {
    t_list *node = new t_list();

    node->item = marine;
    node->next = NULL;
    if (this->lst == NULL) {
        this->lst = node;
    } else {
        t_list *tmp;
        tmp = this->lst;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = node;
    }
    this->count += 1;
    return this->count;
}

Squad::Squad( void ) {
    this->count = 0;
    this->lst = NULL;
}

Squad::Squad( Squad const & src ) {
    *this = src;
}

Squad & Squad::operator=( Squad const & rhs ) {
    if (this != &rhs ) {
        this->count = rhs.getCount();
    }
    return *this;
}