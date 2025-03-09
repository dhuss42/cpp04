#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat& src);
        Cat& operator=(const Cat& other);
        ~Cat();
        void    makeSound() const override;
};

#endif