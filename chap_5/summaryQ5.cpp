#include <iostream>

std::string getName(int num){
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view name){
    std::cout << "Enter the age of " << name << ": ";
    int age {};
    std::cin >> age;
    return age;
}

void printComparison(std::string_view name1, const int age1, std::string_view name2, const int age2){
    std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
}

int main(){
    const std::string name1{getName(1)};
    const int age1 {getAge(name1)};
    const std::string name2{getName(2)};
    const int age2 {getAge(name2)};
    (age1>age2)?printComparison(name1, age1, name2, age2):printComparison(name2, age2, name1, age1);

    return 0;
}
