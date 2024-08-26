#include <iostream>

int main(){
    std::cout << "Enter a number between 0 and 255: ";
    int num {};
    std::cin >> num;

    std::cout << "Your number in binary representation: ";

    int divider {128};
    while (divider>0){
        if (num>=divider){
            std::cout << "1";
            num %= divider;
        } else {
            std::cout << "0";
        }
        divider /= 2;
    }
    std::cout << '\n';
    return 0;
}
