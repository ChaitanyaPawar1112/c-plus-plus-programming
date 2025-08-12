#include<iostream>
#include<vector>
using namespace std;

int main()
{
    char str[]={'a','b','c','\0'};//char array initialization
    cout<<str<<endl;

    char str1[]="apna";//char array initialization
    cout<<str1<<endl;
    cout<<str1[2]<<endl;//index element 


    char str2[16];
    cout<<"enter string:";
    cin.getline(str2,16);//string accept when we have senetence
    cout<<"str2:"<<str2<<endl;


    char str3[]="apna college";
    for(int i=0;str3[i]!='\0';i++)// for printing each character it terminate when we get '/0'.
    {
       cout<<i<<":"<<str3[i]<<endl;
    }

    return 0;
}
    


