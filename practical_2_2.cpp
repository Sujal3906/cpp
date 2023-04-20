#include <iostream>
using namespace std;
int main()
{
	int i,j,temp=0,space,rows=4;
	for(i=0;i<rows;i++)
	{
		for(space=1;space<=rows-i;space++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			temp++;
			cout<<" "<<temp;
		}
	    cout<<endl;
	} 
	return 0;	
}
