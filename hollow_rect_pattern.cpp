#include<iostream>
using namespace std;
int main()
{
    int a=5,b=4;
    int i=0,j=0;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if(i==1||i==a||j==1||j==b)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}