//sum of cube of each digit eq to same number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    int a;
    a=n;
    while(n>0){
        int lastdigit=n%10;
        s+= pow(lastdigit,3); //pow is fn of math.h header file,return power of number here 3 means cube.
        n=n/10;
    }
    if (s==a){
        cout<<"Arm";
    }
    else{
        cout<<"not";
    }

}