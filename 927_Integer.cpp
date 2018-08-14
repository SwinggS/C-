#include <iostream>
#include <math.h>
using namespace std;
int find(int d, long long int vitri)
{
	long long int i = 1;
	long long int x = d;
	while(x < vitri){
		i++;
		x+=i*d;
	}
	return i;
}
int main()
{
	int tc;
	long long int a[tc];
	int bac;
	int d;
	long long int vitri;
	int n;
	cin>>tc;
	for (int i=0; i<tc; i++)
	{
		cin>>bac;
		int ptu[bac+1];
		for(int j=0; j<=bac; j++)
		{
			cin>>ptu[j];
		}
		cin>>d;
		cin>>vitri;
		long long int t = find(d,vitri);
		a[i] = 0;
		for(int j=0; j<=bac; j++)
		{
			a[i] += ptu[j]*pow(t,j);
		}
	}
	for (int i=0; i<tc; i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}