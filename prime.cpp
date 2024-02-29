#include<iostream>
using namespace std;
int main ()
{
    int a,b=0;
    cin>>a;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<"not a prime number"<<endl;
            b++;
            break;
        }
        
    }
    if (b==0)
    {
        cout<<"prime number"<<endl;
    }
    
}