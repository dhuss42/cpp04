# cpp04
Subtype Polymorphism, Abstract Classes, and Interfaces

## ex00 - Polymorphism

This exercise was about creating an Animal Base class. The Dog and Cat Class are derived classes of this Base Class. The Animal Class has a function makeSound which is overwritten in the derived classes so that each Class makes the appropriate animal sound. To test this we also implement a WrongAnimal and Wrong AnimalClass where the makeSound is not overwritten, which is why the WrongCat makes the WrongAnimal noise.

## ex01 - I don’t want to set the world on fire

This exercise was about creating deep copies and proper memory management. The Dog and Cat classes now had a pointer to a Brain object which held an array of 100 strings. I used getter and setter functions to veriy that the copies of my objects were deep copies and I ensured proper polymorphic behavior by deleting Animal objects, allowing the correct destructors to be called in the expected order.

## ex02 - Abstract class

This exercise was about creating an abstract class. I changed the Animal class into an abstract class by making makeSound() a pure virtual function. That way no instance of Animal can be created, but the derived classes Cat and Dog can still be created.