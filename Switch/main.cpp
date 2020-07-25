#include <iostream>

using namespace std;

void switchSentence(int age){

    switch(age){
        case 15: {
            cout << "case 15" << endl;
            break;
        }
        case 16: {
            cout << "Case 16" << endl;
            break;
        }
        default: {
            cout << "Default case" << endl;
            break;
        }
    }
}

void logicalOperator(){
    // || To represent Or
    // && to represent And
    int age = 23;
    int money = 650;
    if(age > 21 && money > 500){
        cout << "Your'e allowed" << endl;
    }
}



int main()
{
    //switchSentence(17);
    //logicalOperator();

}
