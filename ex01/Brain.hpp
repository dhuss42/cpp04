#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain& src);
		Brain& operator=(const Brain& other);
		~Brain();
		void		setIdea(const std::string& idea, int index);
		std::string	getIdea(int index) const;
};

#endif