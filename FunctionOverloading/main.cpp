#include <iostream>

using namespace std;

void printNumber(int value){
    cout << "I'am printing an integer type: " << value << endl;
}

void printNumber(float value){
    cout << "I'am printing an float type: " << value << endl;
}

int main()
{
    int a = 54;
    float b = 32.4896;
    printNumber(a);
    printNumber(b);
}
