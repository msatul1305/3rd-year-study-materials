#include<iostream>
using namespace std;
int e[100],arr[100],w[100],pos[100],c[100],ta[100];
void swapp(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void findWaitingTime(int n,int w[])
{
    int rt[n];
 
    // Copy the burst time into rt[]
    for (int i = 0; i < n; i++)
        rt[i] = e[i];
 
    int complete = 0, t = 0, minm = INT_MAX;
    int shortest = 0, finish_time;
    bool check = false;
 
    // Process until all processes gets completed.
    while (complete != n) {
        // Find process with minimum remaining time among the processes that arrives till the current time
        for (int j = 0; j < n; j++) {
            if ((arr[j] <= t) &&(rt[j] < minm) && rt[j] > 0) {
                minm = rt[j];
                shortest = j;
                check = true;
            }
        }

        if (check == false) {
            t++;
            continue;
        }
 
        // Reduce remaining time by one
        rt[shortest]--;
 
        // Update minimum
        minm = rt[shortest];
        if (minm == 0)
            minm = INT_MAX;
 
	    // If a process gets completely executed
	        if (rt[shortest] == 0) {
	            // Increment complete
	            complete++;
	            // Find finish time of current process
	            finish_time = t + 1;
	 			// Calculate waiting time
	            w[shortest] = finish_time - e[shortest] -arr[shortest];
	            if (w[shortest] < 0) 
					w[shortest] = 0;
	        }
        // Increment time
        t++;
    }
}
void findTurnAroundTime(int n,int w[], int tat[])
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int i = 0; i < n; i++)
        tat[i] = e[i] + w[i];
}
 
// Function to calculate average time
void findavgTime(int n)
{
    int w[n], tat[n], total_wt = 0,
                    total_tat = 0;
 
    // Function to find waiting time of all
    // processes
    findWaitingTime(n, w);
 
    // Function to find turn around time for
    // all processes
    findTurnAroundTime(n, w, tat);
 
    // Display processes along with all
    // details
    cout << "Processes "
        << " Burst time "
        << " Waiting time "
        << " Turn around time\n";
 
    // Calculate total waiting time and
    // total turnaround time
    for (int i = 0; i < n; i++) {
        total_wt = total_wt + w[i];
        total_tat = total_tat + tat[i];
        cout << " " << pos[i] << "\t\t"
            << e[i] << "\t\t " << w[i]
            << "\t\t " << tat[i] << endl;
    }
 
    cout << "\nAverage waiting time = "
        << (float)total_wt / (float)n;
    cout << "\nTotal turn around time = "
        << total_tat;
}


int main()
{
	int i,n;
 cout<<"enter the no of processes";
 cin>>n;
 cout<<"Enter execution times";
 for(i=0;i<n;i++)
 {
  cin>>e[i];
  pos[i]=i+1;
 }
 cout<<"Enter arrival times";
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
     findavgTime(n);
// for(i=0;i<n-1;i++){
// for(int j=0;j<n-i-1;j++){
// 	if(e[j]>e[j+1]){
//	swapp(&arr[j],&arr[j+1]);
//	swapp(&pos[j],&pos[j+1]);
//	swapp(&e[j],&e[j+1]);
//     }
// }
//}
//findWaitingTime(n,w);
// for(i=0;i<n;i++)
// {
// sum+=e[i];
// c[i]=sum;
// cout<<"Completion time for process p["<<pos[i]<<"]"<<":";
//  cout<<c[i];
// cout<<"\n";
// }
// for(i=0;i<n;i++)
// {
// cout<<"Turn Around time for process p["<<pos[i]<<"]"<<":";
// ta[i]=c[i]-arr[i];
// cout<<ta[i];
// cout<<"\n";
// }
// for(i=0;i<n;i++)
// {
// cout<<"Waiting time for process p["<<pos[i]<<"]"<<":";
// //w[i]=ta[i]-e[i];
// cout<<w[i];
// cout<<"\n";
// avg+=w[i];
// }
// avg=avg/n;
// cout<<"Average waiting time:"<<avg<<"\n";
// return 0;
 }
