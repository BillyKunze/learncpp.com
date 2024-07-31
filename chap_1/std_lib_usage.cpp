#include <iostream>

int main(){
    std::cout << "cout means charachter output\n";
    int a{5};
    std::cout << "variable: " << a << '\n';

    std::cout << "neue Zeile\n";                // neue Zeile mit spezial Ausdruck \n  
    std::cout << "neue Zeile" << std::endl;     // neue Zeile mit standart bibliothek
    std::cout << "neue Zeile" << '\n';
    // std::endl erzwingt drucken in die konsole wohingegen \n dies nicht tut. 
    // C++ schreibt ab und zu automatisch von selbst alles gebufferte in die konsole
    // \n ist zeitlich effizienter das jedes schreiben in die konsole resourcen kostet, undabhängig von der textmenge
    // allein stehendes \n kann mit '\n' geschrieben werden. alle spezial Ausdrücke werden mit backslash geschrieben

    std::cout << "Zahl eingeben: ";
    int x{};
    std::cin >> x;
    std::cout << "Es wurde " << x << " eingegeben\n";
    return 0;
}
 