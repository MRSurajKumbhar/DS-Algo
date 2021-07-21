#include<bits\stdc++.h>
using namespace std;

void floodfill(int a[3][4],int r,int c,int setfill,int privfill)
{
	
	if((r<0 && r<=row) || (c<0 && c<=col))int row = a.length;
	int col = a[0].length;
	{
		return; 
	}

	if(a[r][c]==privfill)
	{
		a[r][c]=setfill;
	}

	floodfill(a,r,c-1,setfill,privfill);
	floodfill(a,r,c+1,setfill,privfill);
	floodfill(a,r-1,c,setfill,privfill);
	floodfill(a,r+1,c,setfill,privfill);
}

printflood(int a[3][4])
{
	

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int a[3][4]={
				{1,1, 1},
				{2, 1, 2},
				{3, 3 ,4},
				{5,6,7}
			  }

	floodfill(a,2,2,8,1);
	printflood(a);		  
}