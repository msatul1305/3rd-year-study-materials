//resource_allocation graph for single instance
#include<bits/stdc++.h>
using namespace std;
int n,r,p,e,a,b;
string ss1,ss2;
vector<int> adj[100];
vector<char> color;
vector<int> parent;
int cycle_start, cycle_end;

bool dfs(int v) {
    color[v] = 1;
    for (int u : adj[v]) {
        if (color[u] == 0) {
            //parent[u] = v;
            if (dfs(u))
                return true;
        } else if (color[u] == 1) {
            cycle_start = u;
            return true;
        }
    }
    color[v] = 2;
    return false;
}

main() {
    cout<<"enter the no of resources and processes and edges: ";
    cin>>r>>p>>e;
    n=p+r;
    color.assign(n+1, 0);
    parent.assign(n+1, -1);
    cycle_start = -1;
    cout<<"enter the graph\n";
    for(int i=0;i<e;i++)
    {
	cin>>ss1>>ss2;
	if(ss1[0]=='r')
	    a=p+int(ss1[1]-'0');
	else
	    a=int(ss1[1]-'0');
        if(ss2[0]=='r')
	    b=p+int(ss2[1]-'0');
	else
	    b=int(ss2[1]-'0');
	//cout<<ss1[1]<<" "<<ss2[1]<<"\n";
        //cout<<a<<" "<<b<<"\n";
	adj[a].push_back(b);
    }
    for (int v = 1; v <= n; v++) {
        if (dfs(v))
            break;
    }

    if (cycle_start == -1) {
        cout << "No deadlock" << endl;
    } else {
        cout << "Deadlock found";
        cout << endl;
    }
}

