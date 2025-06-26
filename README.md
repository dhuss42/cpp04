# C++ Module 04

This module focused on teaching polymorphism through inheritance and virtual functions,
as well as introducing abstract classes and interfaces.

## ex00: Polymorphism

This exercise was about creating an Animal base class with a virtual makeSound() function, which I then overrode in the derived Dog and Cat classes
to output the appropriate animal sound.
I also implemented WrongAnimal and WrongCat classes where makeSound() wasn’t virtual, which led to incorrect behavior.

## ex01 – I don’t want to set the world on fire

This exercise focused on deep copying and memory management. 
I added a Brain class with an array of 100 strings, and both Dog and Cat held a Brain* member. 
I ensured that copies of these animals performed deep copies by using custom copy constructors and assignment operators. 
I tested my implementation using getters and setters for Brain::ideas, and verified correct destructor behavior by deleting Animal* objects polymorphically, ensuring no memory leaks occurred.

## ex02 – Abstract class

In this exercise, I turned the Animal class into an abstract class by making makeSound() a pure virtual function. 
This prevented instantiating Animal directly while still allowing derived classes like Dog and Cat to function normally.

---
## Bonus
---

## ex03 – Interface & Recap

This final exercise served as a recap of the entire module and introduced the concept of interfaces in C++. In C++98, interfaces are represented by classes that consist only of unimplemented (pure virtual) methods. I implemented an abstract AMateria class, with Ice and Cure as concrete subclasses. Each subclass overrode the clone() and use() methods, allowing objects to be copied and used polymorphically.

I then implemented the ICharacter interface as a class containing only pure virtual methods, and created a Character class that fulfilled this interface. Characters had an inventory with four slots for AMateria objects. I ensured proper equip, unequip, and use logic, and managed memory carefully to avoid leaks, especially when cloning and deleting AMateria.

Lastly, I implemented a MateriaSource class that followed the IMateriaSource interface. This class could store up to four learned Materias and create new instances based on their type. 
