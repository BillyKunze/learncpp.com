#include <iostream>

int main(){
    std::cout << "Enter a single character: ";
    char a{};
    std::cin >> a;
    int b{a};
    std::cout << "You entered: \'" << a << "\', which has ASCII code " << b << ".\n";
    return 0;
}
