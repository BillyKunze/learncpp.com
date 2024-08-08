#include <iostream>

int enterNumber(){
    std::cout << "Enter a number from 0 to 9: ";
    int num {};
    std::cin >> num;
    return num;
}

bool isPrime(int number){
    return (number == 2 || number == 3 || number ==5 || number == 7);
}

int main(){
    int num {enterNumber()};

    if (isPrime(num)){
        std::cout << "The digit is prime\n";
    } else {
        std::cout << "The digit is not prime\n";
    }
    
    return 0;
}
