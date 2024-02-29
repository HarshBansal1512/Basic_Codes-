#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"Enter operation to be performed ;"<<endl<<"1 for +"<<endl<<"2 for -"<<endl<<"3 for *"<<endl<< "4 for /"<<endl;
    char c;
    cin>>c;
    switch(c)
    {
        case '+':
        {
        cout<<a+b;
        break;
        }
        case '-' :
        break;
        {
        cout<<a-b;
        break;
        }
        case '*' :
        {
        cout<<a*b;
        break;
        }
        case '/' :
        {
        cout<<a/b;
        break;
        }
        default:
        cout<<"Entered wrong input:";
    }
}