#include <iostream>

using namespace std;

int volume(int lenght=1, int width=1, int height=1);

int main()
{
    cout << volume(2,2);
}

int volume(int lenght, int width, int height){
    return lenght * width * height;
}
