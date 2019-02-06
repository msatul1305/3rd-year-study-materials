//Round Robin
#include<bits/stdc++.h>
using namespace std;
map <int,int> m;
int last[10],wt[10];
int n,p,b,executed,qtm,turn;
float avg=0;
main()
{
    cout<<"enter the no of processes:";
    cin>>n;
    cout<<"enter the time quantum:";
    cin>>qtm;
    for(int j=0;j<n;j++)
    {
	cin>>p>>b;
	m.insert(make_pair(p,b));
	wt[p]=0;
	last[p]=0;
    }
    while(executed<n)
    {
	for(auto u:m)
	{
	    p=u.first;b=u.second;
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
