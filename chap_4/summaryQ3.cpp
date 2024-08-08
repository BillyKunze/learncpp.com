#include <iostream>

float gravity = 9.8;

float heightAfterSeconds(float seconds, float initial_height){
    return initial_height - (gravity*seconds*seconds/2);
}

void printHeight(float seconds, float initial_height){
    float height{heightAfterSeconds(seconds, initial_height)};
    if (height > 0.0) {
        std::cout << "At " << static_cast<int>(seconds) << " seconds, the ball is at height: " << height << " meters\n";
    } else {
        std::cout << "At " << static_cast<int>(seconds) << " seconds, the ball is on the ground.\n";
    }
}

int main(){
    std::cout << "Enter the height of the tower in meters: ";
    float height{};
    std::cin >> height;

    printHeight(0.0, height);
    printHeight(1.0, height);
    printHeight(2.0, height);
    printHeight(3.0, height);
    printHeight(4.0, height);
    printHeight(5.0, height);

    return 0;
}
