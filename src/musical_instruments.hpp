/**
\file 
\brief File contains declaration of polymorphic multi inheritance class 
hierarchy of musical instruments.
*/

#ifndef _MUSICAL_INSTRUMENTS_HPP_
#define _MUSICAL_INSTRUMENTS_HPP_

#include <iostream>

/**
\brief Abstract base class representing any kind of musical instrument. 
*/
class Musical_instruments
{
    /// Counts the number of criated objects
    static unsigned m_instruments_counter;
    /// Indicate if instrument is broken.
    bool m_broken;
public:
    /// Default constructor.
    Musical_instruments();
    /// Virtual destructor.
    virtual ~Musical_instruments(); 
    /// Get if instrument is broken.
    bool is_broken() const { return m_broken; }
    /// Sets instruments vroken condition.
    void set_broken(bool broken) { m_broken = broken; }
    /// declaration of make sound function.
    virtual void make_sound() const = 0;
    /// Getting tne number of created objects.
    static unsigned get_instruments_counter() { return m_instruments_counter; }
};

/**
\brief Abstract derived class that virtually inherites from musical_instruments 
base class, representing wood wind instruments.
*/
class Wood_wind_instruments : virtual public Musical_instruments
{
public:
    /// Default constructor.
    Wood_wind_instruments();
    /// Virtual destructor.
    ~Wood_wind_instruments();
};

/**
\brief Concrete class that inherites from Wood_wind_instruments class, 
representing western concert flute instruments.
*/
class Western_concert_flute : public Wood_wind_instruments
{
public:
    /// Default constructor.
    Western_concert_flute();
    /// Virtual destructor.
    ~Western_concert_flute();
    ///Makes sound of flute.
    void make_sound() const;
};

/**
\brief Abstract class that virtually inherites from musical_instruments 
base class, representing bowed string instruments.
*/
class Bowed_string_instruments : virtual public Musical_instruments
{
public:
    /// Default constructor.
    Bowed_string_instruments();
    /// Virtual Destructor.
    ~Bowed_string_instruments();
};

/**
\brief Abstract class that virtually inherites from musical_instruments 
base class, representing electromechanical musical instruments.
*/
class Electromechanical_musical_instruments : virtual public Musical_instruments
{
public:
    /// Default constructor.
    Electromechanical_musical_instruments();
    /// Virtual destructor.
    ~Electromechanical_musical_instruments();
};

/**
\brief Concrete class that inherites from Bowed_string_instruments class, 
representing violin.
*/
class Violin : public Bowed_string_instruments
{
public:
    /// Default constructor.
    Violin();
    /// Virtual destructor.
    ~Violin();
    ///Makes sound of flute.
    void make_sound() const;
};

/**
\brief Concrete class that muliple inherites from Bowed_string_instruments class
and Electromechanical_musical_instruments class, representing electronic violin.
*/
class Electric_violin : public Bowed_string_instruments, public Electromechanical_musical_instruments
{
public:
    /// Default constructor.
    Electric_violin();
    /// Virtual destructor.
    ~Electric_violin();
    ///Makes sound of flute.
    void make_sound() const;
};

#endif
