#include<iostream>
using namespace std;
int main()
{

 float avg=0.0;
 int total,n,sum=0,i=0;
 cout<<"enter the no of processes";
 cin>>n;
  int e[n],w[n],c[n],ta[n];
 cout<<"Enter execution times";
 for(i=0;i<n;i++)
 {
  cin>>e[i];
 }
 for(i=0;i<n;i++)
 {
 sum+=e[i];
 c[i]=sum;
 cout<<"Completion time for process p["<<i+1<<"]"<<":";
  cout<<c[i];
 cout<<"\n";
 }
 for(i=0;i<n;i++)
 {
 cout<<"Turn Around time for process p["<<i+1<<"]"<<":";
 ta[i]=c[i];
 cout<<ta[i];
 cout<<"\n";
 }
 for(i=0;i<n;i++)
 {
 cout<<"Waiting time for process p["<<i+1<<"]"<<":";
 w[i]=ta[i]-e[i];
 cout<<w[i];
 cout<<"\n";
 avg+=w[i];
 }
 avg=avg/n;
 cout<<"Average waiting time:"<<avg<<"\n";
 return 0;
 }
