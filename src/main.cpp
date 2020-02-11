/**
\file 
\brief File contains main function.
*/

#include <iostream>

void test_inheritance();
void test_non_polymorphic_inheritance();


/**
\brief Executes, program displays information about test and runs test functions.
*/
int main()
{
    std::cout << "__________________Test non polymorphic inheritance___________________\n"
              << "Testing non polymorphic functionality, order of constructor\n"
              << "and destructor calls and non-virtual destructor usage issues.\n\n";
    test_non_polymorphic_inheritance();
    std::cout << "___________________Test polymorphic inheritance______________________\n"
              << "Testing static member variable and function, polymorthic\n"
              << "functionality with objects, destructor calls using virtual destructor,\n"
              << "the solution of diamond problem using virtual inheritance.\n\n";
    test_inheritance();

    return 0;
}
