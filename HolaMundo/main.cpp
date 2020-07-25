#include <iostream>
#include <string>

using namespace std;

class VariableClass{
    private:
        string name;
    public:
        VariableClass(string nameParam){
            setName(nameParam);
        };

        void setName(string nameParam){
            name = nameParam;
        };

        string getName(){
            return name;
        };
};

int main(){
    VariableClass vClass("Constructor");
    //vClass.setName("Hola");
    cout << vClass.getName();
    return 0;
}

//TestClass testClass;
//testClass.coolSayin();
class TestClass{
    public:
        void coolSayin(){
            cout << "Print something cool" << endl;
        }
};

int addNumbers(int x, int y){
    int answer = x + y;
    return answer;
}

void printSomething(int x){
    //NOTA LAS FUNCIONES DEBEN IR ANTE DEL METODO MAIN
    cout << "Print something function: " << x << endl;
}

void ifStatement(){
    //Equality (a==b), (a!=b)
    //Relational (a<=b), (a>=b)
    //Conditional Operators ||, &&
    int a = 22;
    int b = 23;
    if(a == b){
        cout << "A is equal than B\n";
    }else{
        cout << "A isn't equal than \n";
    }
}

void holaMundo(){
    int a;
    int b;
    int sum;

    cout << "Enter first number\n";
    cin >> a;

    cout << "Enter second number\n";
    cin >> b;

    sum = a + b;
    cout << "The sum of those number is: " << sum << "\n";
}
