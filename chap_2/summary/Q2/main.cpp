int readNumber();
void writeAnswer(int answer);

int main(){
    int numA { readNumber() };
    int numB { readNumber() };
    writeAnswer(numA + numB);
    return 0;
}
