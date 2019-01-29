#include<bits/stdc++.h>
using namespace std;
main()
{
	int i,bt[7],rm[7],q,n=5,p,t,k,in[]={1,2,3,4,5},pt[5],j,at[5];
	float awt=0.0,s=0.0;
		cout<<"enter the burst time for each process\n";
		for(i=0;i<5;i++)
		{
			cin>>bt[i];
		}
		cout<<"enter the priority for each process\n";
		for(i=0;i<5;i++)
		{
			cin>>pt[i];
		}
		cout<<"enter the arrival time for each process\n";
		for(i=0;i<5;i++)
		{
			cin>>at[i];
		}
			for(i=0;i<n;i++)
		{
			rm[i]=bt[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(pt[i]>pt[j])
				{
					swap(pt[i],pt[j]);
					swap(bt[i],bt[j]);
					swap(in[i],in[j]);
					swap(rm[i],rm[j]);
					swap(at[i],at[j]);
				}
			}
		}
		cout<<"enter the quantum\n";
		cin>>q;
		t=at[0];
		while(1)
		{
			p=0;
			for(i=0;i<n;i++)
			{
				
				if(rm[i]>0)
				{
					p=1;
					if(rm[i]>q)
					{
						rm[i]=rm[i]-q;
						t=t+q;
					}
					else
					{
						p=1;
						t=t+rm[i];
						rm[i]=0;
						k=t-bt[i];
						cout<<"waiting time for process"<<in[i]<<": "<<k<<endl;
						s=s+k;
					}
				}
			}
				if(p==0)
				break;
				
		}
		awt=s/5;
		cout<<"average waiting time is"<<awt<<endl;
		cout<<"turn around time is"<<t<<endl;
	}
