//Round Robin with priority and arrival taking idle
#include<bits/stdc++.h>
using namespace std;
map <int,int> m;
int last[10],wt[10],prr[10],arr[10];
int n,p,a,b,pr,executed,qtm,turn;
float avg=0;
main()
{
    cout<<"enter the no of processes:";
    cin>>n;
    cout<<"enter the time quantum:";
    cin>>qtm;
    for(int j=0;j<n;j++)
    {
	cin>>p>>a>>pr>>b;
	m.insert(make_pair(pr,b));
	wt[p]=0;
	arr[p]=a;
	last[p]=a;
	prr[pr]=p;
    }
    while(executed<n)
    {
	for(auto u:m)
	{
	    pr=u.first;b=u.second;
	    p=prr[pr];
	    while(arr[p]>turn)
	    {
		turn++;
	    }
	    if(b==0)
	    continue;
   	    else if(b>qtm)
	    {
		m[u.first]=m[u.first]-qtm;
		wt[p]+=turn-last[p];
		turn+=qtm;
		last[p]=turn;
	    }
	    else if(b<=qtm)
	    {
		wt[p]+=turn-last[p];
		turn+=b;
		m[u.first]=0;
		executed++;
	    }
	}
    }
    for(int i=1;i<=n;i++)
    {
    	cout<<"waiting time of process "<<i<<": "<<wt[i]<<"\n";	
    	avg+=wt[i];
    }
		
    cout<<"average waiting time:"<<(avg/n)<<"\n";
    cout<<"turn around time:"<<turn;
}
