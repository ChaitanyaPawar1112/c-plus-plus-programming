#include <iostream>
using namespace std;

void palindrome(string s)
{
    string rev = ""; 

    
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }

    
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
