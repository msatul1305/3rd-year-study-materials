//SJF arrival time differs
#include<bits/stdc++.h>
using namespace std;
main()
{
    map <int,int> pa;
    multimap <int,int> bp;
    multimap <int,int> :: iterator itr;
    int wt[10];
    int last[10];
    int a,b,comp=0,i=0,temp=0,n,p,turn=0;
    float avg=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>a>>b;
	bp.insert(make_pair(b,p));
	pa.insert(make_pair(p,a));
	wt[p]=0;
	last[p]=a;
	turn+=b;
    }
    for(int i=0;i<=turn;i++)
    {
		for(itr=bp.begin();itr!=bp.end();itr++)
		{
		
	    	int x=(*itr).first,y=(*itr).second,z=pa[y];
	    	if(z>i)
			continue;
	    	if(x!=0)
	    	{
	    		//cout<<x<<" "<<y<<"\n";
				bp.insert(make_pair(x-1,y));
				wt[y]=wt[y]+i-last[y];
				last[y]=i+1;
				bp.erase(itr);
				break;
	    	}
		}
    }
  
    for(int i=1;i<=p;i++)
    {
    	cout<<"waiting time of process "<<i<<": "<<wt[i]<<"\n";	
    	avg+=wt[i];
    }
		
    cout<<"average waiting time:"<<(avg/n)<<"\n";
    cout<<"turn around time:"<<turn;
}
