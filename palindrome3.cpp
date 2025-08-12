#include <iostream>
#include <algorithm> // for reverse function
using namespace std;

void palindrome(string s)
{
    string rev = s; //copy of string into rev
    reverse(rev.begin(), rev.end()); // built-in reverse

    if (s == rev)
        cout << "palindrom";
    else
        cout << "not palindrom";
}

int main()
{
    string str;
    cout << "enter string : ";
    getline(cin, str);
    palindrome(str);
}
