#include<iostream>
using namespace std;
int main()
{

 float avg=0.0;
 int total,n,sum=0,i=0;
 cout<<"enter the no of processes";
 cin>>n;
  int e[n],w[n];
 cout<<"Enter execution times";
 for(i=0;i<n;i++)
 {
  cin>>e[i];
 }
 for(i=0;i<n;i++)
 {
 sum+=e[i];
 w[i]=sum;
 cout<<"Completion time for process p["<<i+1<<"]"<<":";
  cout<<w[i];
 cout<<"\n";
 }
 for(i=0;i<n;i++)
 {
 cout<<"Turn Around time for process p["<<i+1<<"]"<<":";
 cout<<w[i]-arr[i];
 cout<<"\n";
 }
 for(i=0;i<n;i++)
 {
 cout<<"Waiting time for process p["<<i+1<<"]"<<":";
 cout<<w[i-1]-arr[i];
 cout<<"\n";
 avg+=w[i-1]-arr[i];
 }
 avg=avg/n;
 cout<<"Average waiting time:"<<avg<<"\n";
 return 0;
 }
