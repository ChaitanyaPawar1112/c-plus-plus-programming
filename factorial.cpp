#include<iostream>
using namespace std;

    int factorial(int n)//recursive function
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        return n*factorial(n-1);
    }


    int main()
    {
        int n=6;
        int temp=1;
        for(int i=n;i>=1;i--)
        {
            temp*=i;
        }
        cout<<"factorial calulate by loop:"<<temp<<endl;

        //factorial by recursive
        int m=6;
        int result=factorial(m);
        cout<<"factorial calculate by recursively:"<<result;
        return 0;


        
   }
