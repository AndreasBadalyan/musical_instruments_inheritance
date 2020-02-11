/**
\file 
\brief File contains definitions of non_polymorphic_inheritance.hpp file classes' members.
*/

#include "non_polymorphic_inheritance_flute.hpp"

/**
\brief Default constructor of Concert_flute class.
*/
Concert_flute::Concert_flute()
{
    std::cout << "Constructor for Concert_flute.\n";
}

/**
\brief Destructor of Concert_flute class.
*/
Concert_flute::~Concert_flute()
{
    std::cout << "Destructor for Concert_flute.\n";
}

/**
\brief Memeber function of Concert_flute class that makes sound of flute.
*/
void Concert_flute::make_sound() const
{
    std::cout << "Sound of Concert_flute.\n";
}

/**
\brief Default constructor of Piccolo class.
*/
Piccolo::Piccolo()
{
    std::cout << "Constructor for Piccolo.\n";
}

/**
\brief Destructor of Piccolo class.
*/
Piccolo::~Piccolo()
{
    std::cout << "Destructor for Piccolo.\n";
}

/**
\brief Memeber function of Piccolo class that makes sound of piccolo flute.
*/
void Piccolo::make_sound() const
{
    std::cout << "Sound of Piccolo.\n";
}
