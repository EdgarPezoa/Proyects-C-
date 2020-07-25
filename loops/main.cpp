#include <iostream>
#include <cmath>

using namespace std;

void whileLoop(){
    int loop = 0;
    while(loop <= 20){
        cout << "Loop is; "<< loop << endl;
        //loop = loop + 1;
        //loop+=1;
        //loop++;
    }
}

void calculateAge(){
    int age = 0;
    int totalAge = 0 ;
    int totalEntered = 0;

    cout << "Enter an age or -1 to exit" << endl;
    cin >> age;
    while(age>0){
        totalAge += age;
        totalEntered++;

        cout << "Enter an age or -1 to exit" << endl;
        cin >> age;
    }

    cout << "Average age: " << totalAge/totalEntered << endl;

}

void incrementableFunct(){
    int x = 10;
    cout << x++ << endl;
    cout << x << endl;
    cout << ++x << endl;
}

void forLoop(){
    for(int x = 0; x <= 10; x++){
        cout << "Count is: " << x << endl;
    }
}

void stockMarket(){
    float a;
    float p = 10000;
    float r = .01;

    for(int day = 1; day <= 20; day++){
        a = p * pow(1 + r, day);
        cout << day << " ----- " << a << endl;
    }
}

void doWhile(){
    int x = 1;
    do{
        cout << x << endl;
        x++;
    }while(x<10);
}

int main()
{
    //calculateAge();
    //incrementableFunct();
    //forLoop();
    //stockMarket();
    //doWhile();

}
