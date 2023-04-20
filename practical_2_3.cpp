#include <iostream>
using namespace std;
int main()
{
	int a,i,temp=1;
	cout<<"Enter a number :";
	cin>>a;
	if(a==0||a==1)
		cout<<"Number is prime";
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
			temp=0;
    }
    if(temp==1)
		cout<<"number is prime";
	else
		cout<<"number is not prime";
	return 0;
}
