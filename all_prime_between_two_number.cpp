#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    for(int x=a;x<=b;x++)
    {
    int c=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            c++;
            break;
        }
        
    }
    if (c==0)
    {
        static int h=1;
        cout<<h<<")"<<" "<<x<<" prime number"<<endl;
        h++;    
    }
    }
    
}