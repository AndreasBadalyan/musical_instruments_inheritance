/**
\file 
\brief File contains declaration of Concert_flute base class and piccolo derived class.
*/

#ifndef _NON_POLYMORPHIC_INHERITANCE_FLUTE_HPP_
#define _NON_POLYMORPHIC_INHERITANCE_FLUTE_HPP_ 

#include <iostream>

/**
\brief Base class representing western concert flute musical instrument. 
*/
class Concert_flute  
{
public:
    ///Default constructor.
    Concert_flute();
    ///Destructor.
    ~Concert_flute();
    ///Makes sound of flute.
    void make_sound() const;
};

/**
\brief Derived class representing piccolo flute musical instruments.
*/
class Piccolo : public Concert_flute
{
public:
    ///Default constructor.
    Piccolo();
    ///Destructor.
    ~Piccolo();
    ///Makes sound of piccolo flute.
    void make_sound() const;
};

#endif
