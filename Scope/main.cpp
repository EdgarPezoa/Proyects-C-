#include <iostream>

using namespace std;

//Global variable
int something = 20;

int main()
{
    //function variable
    int something = 10;
    cout << something << endl;

    cout << ::something << endl;
}
