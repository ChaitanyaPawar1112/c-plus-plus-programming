#include<iostream>
using namespace std;

void palindrome(string s)
{
    int count=0;
    int count1=0;
    string s1;
  for(int i=0;s[i]!=0;i++)
  {
     
     count++;
  }
  for(int i=0;i<count;i++)
  {
    int j=count-1-i;
    
    if(s[i]==s[j])
    {
        count1+=1;
       
    }
    else
    {

        break;
    }
   
    

  }
  if(count1==count)
  {
    cout<<"palindrom";
  }
  else{
    cout<<"not palindrom";
  }
  
}
int main()
{
    string str;
    cout<<"enter string :";
    getline(cin,str);
    palindrome(str);
    
}
