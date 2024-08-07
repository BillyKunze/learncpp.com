#include <iostream>

int doubleNumber(int num){
    return num*2;
}

int main(){
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    std::cout << "Your number doubled: " << doubleNumber(num) << '\n';
    return 0;
}
