#include <iostream>
#include <vector>
using namespace std;
bool F[1001][1001];
int soTong,soPhantu;
void run()
{
	cin>>soTong;
	cin>>soPhantu;
	int a[soPhantu];
	for(int i=0; i<soPhantu; i++)
	{
		cin>>a[i];
	}
	for(int i=1; i<=soPhantu; i++)
	{
		F[i][0] = true;
	}
	F[0][0] = true;
	for(int i=1; i<=soTong; i++)
	{
		for(int j=0; j<soPhantu; j++)
		{
			if(F[j-1][i])
			{
				F[j][i] = true;
				continue;
			}
			if(a[j] > i)
				F[j][i] = false;
			else
			{
				if
			}
		}
	}
}
int main()
{
	return 0;
}