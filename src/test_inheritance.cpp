/**
\file 
\brief File contains implementation of test functions.
*/

#include "musical_instruments.hpp"
#include "non_polymorphic_inheritance_flute.hpp"

/**
\brief Tests for polymorphic calls, multiple inheritance, static members and abstract class.
*/
void test_inheritance()
{
    std::cout << "Musical_instruments is abstract class therefore following command"
              << "\nraises compile error: Musical_instruments instrument;\n";
    std::cout << "Static member variables and member functions exists before any object creation.\n"
              << "instruments_counter static member variable valude\nbefore any object creation is: ";
    std::cout << Musical_instruments::get_instruments_counter() << std::endl;
    
    Musical_instruments *arr_of_instruments_ptr[3]; 
    std::cout << "\nCreating Violin class object and assigning to base class pointer.\n";
    arr_of_instruments_ptr[0] = new Violin;
    std::cout << "\nCreating multiple inherited Electric_violin class object and assigning to base pointer.\n";
    std::cout << "This operation would cause a compile error because of a diamond problem.\n";
    std::cout << "That accures due to multiple instances of classes in case of non-virtual inheritance.\n";
    arr_of_instruments_ptr[1] = new Electric_violin;
    std::cout << "\nCreating Western_concert_flute class object and assigning to base class pointer.\n";
    arr_of_instruments_ptr[2] = new Western_concert_flute;
    std::cout << "instruments_counter: " << Musical_instruments::get_instruments_counter() << std::endl;

    std::cout << "\nPolymorphic calls when calling derived class functions using base class pointers.\n";
    for (int i = 0; i < 3; ++i) {
        arr_of_instruments_ptr[i]->make_sound();
    }

    std::cout << "\nDeleting objects using base class pointers. Works correctly due to virtual destructor.\n";
    for (int i = 0; i < 3; ++i) {
        delete arr_of_instruments_ptr[i];
        std::cout << "instruments_counter: " << Musical_instruments::get_instruments_counter() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "In case of non virtual destructor we would receive a run time error\n"
              << "and the program would be aborted because of having a non-static\n"
              << "member variable in abstract class.\n";
}

/**
\brief Tests for non polymorphic calls, single inheritance, orders of constructors and destructors calls.
*/
void test_non_polymorphic_inheritance()
{
    std::cout << "Creating Concert_flute class object which is base class for Piccolo\n";
    Concert_flute *flute_ptr = new Concert_flute;
    std::cout << "\nCreating Piccolo derived class object.\n";
    Piccolo *piccolo_ptr = new Piccolo;
    std::cout << "\nCalling overriden function using each type pointer: \n"
              << "flute_ptr->make_sound() - ";
    flute_ptr->make_sound();
    std::cout << "piccolo_ptr->make_sound() - ";
    piccolo_ptr->make_sound();
    std::cout << "\nCalling function in derived class using base class pointer calls function\n"
              << "in base class if exists, gives compile error if it doesn't exist in base.\n";
    Concert_flute *flute_ptr1, *flute_ptr2;
    flute_ptr1 = new Concert_flute;
    flute_ptr2 = new Piccolo;
    std::cout <<"Base class pointer to base class object: ";
    flute_ptr1->make_sound();
    std::cout <<"Base class pointer to derived class object: ";
    flute_ptr2->make_sound();
    std::cout << "\nDelete base class object using base class pointer:\n";
    delete flute_ptr;
    std::cout << "\nDelete derived class object using deriveed class pointer:\n";
    delete piccolo_ptr;
    std::cout << "\nDelete base class object using base class pointer:\n";
    delete flute_ptr1;
    std::cout << "\nDelete derived class object using base class pointer:\n";
    delete flute_ptr2;
    std::cout << "Calls only base class destructor, because of non-virtual destructor!\n"
              << "Causes memory leak if class allocated dynamic memory.\n\n";
}
