#include<bits/stdc++.h>
using namespace std;
int phi[5]={1,1,1,1,1},chop[6]={1,1,1,1,1,1},p;
void assign(int a)
{
	int l=(5+a)%5;
	int r=(5+a+1)%5;
	if(chop[l]&&chop[r])
	{
		cout<<"philosopher "<<a+1<<" starts eating\n";
		chop[l]=0;
		chop[r]=0;
		phi[a]=0;
	}
	else
		cout<<"chopsticks not available. Have to wait!!!";
}
main()
{
	cout<<"initially all philosphers are in thinking state\n";
	while(1)
	{
		cout<<"Enter which philosopher wants to eat from 1 to 5.\nEnter 6 to free philosopher.\nEnter 0 to quit \n";
		cin>>p;
		if(p==0)
			break;
		if(p!=6)
		{
			if(phi[p-1])
				assign(p-1);
			else
				cout<<"philosopher "<<p<<" already in eating mode\n";
		}
		else
		{
			cout<<"enter which philosopher wants to stop eating:  ";
			cin>>p;
			if(!phi[p-1])
			{
				int a=p-1;
				int l=(5+a)%5;
				int r=(5+a+1)%5;
				chop[l]=1;
				chop[r]=1;	
				phi[a]=1;
			}
			else
				cout<<"philosopher "<<p<<" already in thinking mode\n";
		}
	}
}
