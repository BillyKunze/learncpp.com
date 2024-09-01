#include <iostream>

int main(){
    std::cout << "Enter an integer: ";
    int iSmall {};
    std::cin >> iSmall;
    std::cout << "Enter a larger integer: ";
    int iLarge {};
    std::cin >> iLarge;
    if (iSmall>iLarge)
    {
        std::cout << "Swapping the values\n";
        int tmp {iSmall};
        iSmall = iLarge;
        iLarge = tmp;
    }
    std::cout << "The smaller value is " << iSmall << '\n';
    std::cout << "The larger value is " << iLarge << '\n';
    return 0;
}
