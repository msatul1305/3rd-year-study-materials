#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,bt[100],tta=0,twt=0,wt[100];
	cout<<"Enter no. of processes\n";
	cin>>n;
	cout<<"Arrival time of each process = 0\n";
	cout<<"Enter burst time of each\n";
	for(i=0;i<n;i++)
	{	
		cout<<i+1<<"-- ";
		cin>>bt[i];
		tta+=bt[i];
		cout<<endl;
	}
	cout<<"Total turn around Time = "<<tta<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(bt[i]>bt[j])
			{
				wt[i]+=bt[j];
			}
		}
		twt+=wt[i];
		cout<<"Waiting Time for Process--"<<i+1<<" = "<<wt[i]<<endl;
	}
	cout<<"Total waiting Time = "<<twt<<endl;
	cout<<"Average waiting Time = "<<(float)twt/n<<endl;
	return 0;
}
