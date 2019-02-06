//PSA arrival time differs
#include<bits/stdc++.h>
using namespace std;
int pa[10];
vector < pair<int,int> > prp[11];
vector < pair<int,int> > :: iterator itr;

int wt[10];
int ct[10];
int a,b,comp=0,i=0,temp=0,n,p,turn=0,pr;
float avg=0;
main()
{
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>a>>b;
		prp[b].push_back(make_pair(a,p));
		pa[p]=a;
		wt[p]=0;
		ct[p]=b;
    }
    for(int i=0;i<10;i++)
    	sort(prp[i].begin(),prp[i].end());
	for(int i=0;i<10;i++)
	{
		for(auto u:prp[i])
		{
			int pr=u.first,y=u.second,z=pa[y];
	    	if(z>turn)	
				turn=z;
				
	    	wt[y]=turn-z;
	    	turn+=ct[y];
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
