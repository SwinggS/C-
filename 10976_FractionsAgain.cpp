#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int tu, k;
	int dem=0;
	cin>>k;
	int y=k;
	for(int i=k+1; i<=k*2; i++)
	{
		y++;
		int tu = y - k;
		int x = k*y;
		if(x%tu==0)
		{
			dem++;
			cout<<"1"<<"/"<<k<<" = "<<"1"<<"/"<<x/tu<<" + "<<"1"<<"/"<<y<<endl;
		}
	}
	cout<<dem<<endl;
	return 0;
}