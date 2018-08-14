#include <iostream>
#include <string>
using namespace std;
int main()
{
	int th;
	int sln, slt;
	string name[sln];
	int l[sln], h[sln];
	int p[slt];
	int dem;
	cin>>th;
	for(int i=0; i<th; i++)
	{
		cin>>sln;
		for(int j=0; j<sln; j++)
		{
			cin>>name[j]>>l[j]>>h[j];
		}
		cin>>slt;
		for(int j=0; j<slt; j++)
		{
			cin>>p[j];
		}
	}
	for(int i=0; i<slt; i++)
	{
		int n;
		dem = 0;
		for(int j=0; j<sln; j++)
		{
			if(p[i]>=l[j] && p[i]<=h[j])
			{
				dem++;
				n = j;
			}
		}
		if(dem == 1)
			cout<<name[n]<<endl;
		else
			cout<<"UNDETERMINED"<<endl;
	}
	return 0;
}