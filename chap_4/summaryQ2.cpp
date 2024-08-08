#include <iostream>

double enterDouble(){
    std::cout << "Enter a double value: ";
    double n{};
    std::cin >> n;
    return n;
}

bool testOperation(char op){
    return (op =='+' || op =='-' || op =='*' || op =='/');
}

double doOperation(char op, double a, double b){
    if (op =='+'){
        return a+b;
    } 
    else if (op =='-')
    {
        return a-b;
    }
    else if (op =='*')
    {
        return a*b;
    }
    else if (op =='/')
    {
        return a/b;
    }   
}

int main(){
    double a{enterDouble()}, b{enterDouble()};

    char operation{};
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> operation;
    if (testOperation(operation))
        std::cout << a << " " << operation << " " << b << " is " << doOperation(operation, a, b) << '\n';

    return 0;
}
