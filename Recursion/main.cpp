#include <iostream>

using namespace std;

void recursion(){
    cout << "Recursion";
    recursion();
}

int factorial(int value){
    if(value <=1){
        return 1;
    }
    return value * factorial(value - 1);
}

int main()
{
    //recursion();
    cout << factorial(5);
}
