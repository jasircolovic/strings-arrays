#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

void populate(int size, int* ptr)
{   
srand(unsigned(time(0)));
    int counter = 0;
    while (counter < size)
    {
        ptr[counter] = (rand() % 50) + 1;
        counter++;
    }
    for (int i = 0; i < size; i++ ) {
        cout << ptr[i] << endl;
    }   
}
int main() {

    int size;
    cout << "how many first elements: ";
    cin >> size;
    int arr[50];
    
populate(size,arr);
    getch();
    return 0;
}