/**
\file 
\brief File contains definitions of non_polymorphic_inheritance.hpp file classes' members.
*/


#include "musical_instruments.hpp"

/**
\brief Counts the number of criated objects
*/
unsigned Musical_instruments::m_instruments_counter = 0;

/**
\brief Default constructor of Musical_instruments class.
*/
Musical_instruments::Musical_instruments() : m_broken(false)
{ 
    std::cout << "Constructor for Musical_instruments.\n";
    ++m_instruments_counter;
}

/**
\brief Virtual destructor of Musical_instruments class.
*/
Musical_instruments::~Musical_instruments()
{
     std::cout << "Destructor for Musical_instruments.\n";
     --m_instruments_counter;
}

/**
\brief Default constructor of Wood_wind_instruments class.
*/
Wood_wind_instruments::Wood_wind_instruments()
{
    std::cout << "Constructor for Wood_wind_insruments.\n";
}

/**
\brief Virtual destructor of Wood_wind_instruments class.
*/
Wood_wind_instruments::~Wood_wind_instruments()
{
    std::cout << "Destructor for Wood_wind_insruments.\n";
}

/**
\brief Default constructor of Western_concert_flute class.
*/
Western_concert_flute::Western_concert_flute()
{
    std::cout << "Constructor for Western_concert_flute.\n";
}

/**
\brief virtual destructor of Western_concert_flute class
*/
Western_concert_flute::~Western_concert_flute()
{
    std::cout << "Destructor for Western_concert_flute.\n";
}

/**
\brief Memeber function of Western_Concert_flute class that makes sound of flute.
*/
void Western_concert_flute::make_sound() const
{
    std::cout << "Sound of Western_concert_flute.\n";
}

/**
\brief Default constructor of Bowed_string_instruments class.
*/
Bowed_string_instruments::Bowed_string_instruments()
{
    std::cout << "Constructor for Bowed_string_instruments.\n";
}

/**
\brief Virtual destructor of Bowed_string_instruments class.
*/
Bowed_string_instruments::~Bowed_string_instruments()
{

    std::cout << "Destructor for Bowed_string_instruments.\n";
}

/**
\brief Default constructor of Electromechanical_musical_instruments class.
*/
Electromechanical_musical_instruments::Electromechanical_musical_instruments()
{
    std::cout << "Constructor for Electromechanical_musical_instruments.\n";
}

/**
\brief Virtual destructor of Electromechanical_musical_instruments class.
*/
Electromechanical_musical_instruments::~Electromechanical_musical_instruments()
{

    std::cout << "Destructor for Electromechanical_musical_instruments.\n";
}

/**
\brief Default constructor of Violin class.
*/
Violin::Violin()
{
    std::cout << "Constructor for Violin.\n";
}

/**
\brief Virtual destructor of Violin class.
*/
Violin::~Violin()
{
    std::cout << "Destructor for Violin.\n";
}

/**
\brief Memeber function of Violin class that makes sound of violin.
*/
void Violin::make_sound() const
{
    std::cout << "Sound of Violin.\n";
}

/**
\brief Default constructor of Electric_violin class.
*/
Electric_violin::Electric_violin()
{
    std::cout << "Constructor for Electric_violin.\n";
}

/**
\brief Virtual destructor of Electric_violin class.
*/
Electric_violin::~Electric_violin()
{
    std::cout << "Destructor for Electric_violin.\n";
}

/**
\brief Memeber function of Electric_violin class that makes sound of electric violin.
*/
void Electric_violin::make_sound() const
{
    std::cout << "Sound of Electric_violin.\n";
}
