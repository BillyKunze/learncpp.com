/*
Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise. Use the remainder operator to test whether the integer parameter is even. Make sure isEven() works with both positive and negative numbers.
*/
#include <iostream>

constexpr bool isEven(int num){
    return (num%2)==0;
}

int main(){
    std::cout << "Enter an integer: ";
    int num {};
    std::cin >> num;
    if (isEven(num))
        std::cout << "Your number is even.\n";
    else
        std::cout << "Your number is odd.\n";
    return 0;
}
