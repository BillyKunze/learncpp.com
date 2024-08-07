#include "io.h"

int main(){
    int numA { readNumber() };
    int numB { readNumber() };
    writeAnswer(numA + numB);
    return 0;
}
