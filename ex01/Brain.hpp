#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& src);
        Brain& operator=(const Brain& other);
        ~Brain();
};

#endif