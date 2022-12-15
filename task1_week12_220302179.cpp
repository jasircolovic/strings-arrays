#include <iostream>
#include <string>
using namespace std;

int charcount(char *ptr, char c);

int main()
{
    char c;
    char *ptr;
    string str;
    cout << "Input a string ";
    getline(cin, str);
    cout << "Input a character ";
    cin >> c;
    ptr = &str[0];
    cout << "The character you input "<< c << " occurs " << charcount(ptr, c) 
    << " times in the string " << str << endl;
    return 0;
}

int charcount (char *ptr, char c)
{
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        count++;
        ptr++;

    }
    return count;
}