#include <stdio.h>
#include <iostream>

int main()
{
    int width;
    width = 5;
    std::cout << "Original width: " << width << "\n";
    width = 7;
    std::cout << "Modified width: " << width << "\n";

    int a;          // no initializer(default)
    int b = 5;      // initial value after = (copy initialization)
    int c(6);       // intial value within () (direct initialization)

    int d{7};       // initial value within {} (direct list initialization)
    int e = {8};    // initial value in {} after = sign (copy list initialization)
    int f {};       // initializer is empty {} (value initialization)

    // geschwungene Klammern sorgen für eine sichere initialisierung
    // denn sie lassen nur werte zu, welche auch von der variable gehalten werden können
    // copy init oder direct init führen keine solche überprüfung durch sondern machen einfach typecast
    int w1 { 4.5 }; // compile error: list init does not allow narrowing conversion of 4.5 to 4
    int w2 = 4.5;   // compiles: copy init initializes width with 4
    int w3(4.5);    // compiles: direct init initializes width with 4

    //--------------------------------------------------------------------------------------------------------------------
    // multiple variable initialization

    int a1 = 1, a2 = 2;     // copy initialization
    int a3 (3), a4 (4);     // direct initialization
    int a5 {5}, a6 {6};     // direct list initialization (best practice)
    int a7 = {7}, a8 = {8}; // copy brace initialization
    int a9 {}, a10 {};      // value initialization
    
    //--------------------------------------------------------------------------------------------------------------------
    // if an variable is not used, compiler complains about unused variables
    // some variables maybe should be like this, mostly constants 
    // the [[maybe_unused]] attribute fixes this since c++17

    [[maybe_unused]] double pi {4.14159};
    [[maybe_unused]] double gravity {9.8};
    [[maybe_unused]] double phi {1.61803};

    std::cout << "Phi: " << phi << "\n";
    std::cout << "Pi: " << pi << "\n";

    // copiler won't complain about gravity not used

    return 0;
}
