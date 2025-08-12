#include<iostream>
using namespace std;
#include<algorithm>//use for reverse ,sort and many other built in
int main()
{
    string name="chaitanya";
    string name2="pawar";
    string concat=name+name2;//concatination
    cout<<"after cancat:"<<concat<<endl;
     
    reverse(concat.begin(),concat.end());//reverse string
    cout<<"after reverse:"<<concat<<endl;


    cout<<"length is"<<concat.length();//length function 
    return 0;
}
