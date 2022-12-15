#include <iostream>
#include <string>
using namespace std;

int repeat(char *ptr);

int main()
{
    char *ptr;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    ptr = &str[0];
    cout << "The string " << str << " has " << repeat(ptr) << " repeated characters." << endl;
    return 0;
}

int repeat(char *ptr)
{
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == *(ptr + 1))
            count++;
        ptr++;
    }
    return count;
}