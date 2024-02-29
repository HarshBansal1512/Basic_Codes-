#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    for(int i=2;i<n;i++){
        int b=0;
        b=n%i;
        if(b==0){
           a++;
           break; 
        }
    }
    if(a==0)
    {cout<<"prime";}
    else
    {cout<<"not a prime number";}
}