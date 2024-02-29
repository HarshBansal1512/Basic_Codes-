#include<iostream>
using namespace std;
int main()
{
	for(int j=1;j<4;j++)
	{
	
	int c;
	cout<<"enter password ; ";
	cin>>c;
	if (c==36)
	{
	cout<<"Entered password is correct"<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"input value is equal to "<<a<<endl;
	cout<<"input value of b is eq to "<<b<<endl;
	return 0;
	}
	else
	{
	
	cout<<"Entered password is wrong you are left with ";
	cout<<3-j;
	cout<<" options "<<endl;
}
}
	return 0;
}
