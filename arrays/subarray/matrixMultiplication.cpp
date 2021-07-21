#include<bits\stdc++.h>
using namespace std;

int main()
{
	

	int m1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int m2[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

	int ans[3][3];
	for (int i = 0; i < 3; ++i)
	{
		for(int j=0;j<3;j++)
		{
			ans[i][j]=0;
		}
	}

	

	


	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<4;k++)
			{
				ans[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for(int j=0;j<3;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}