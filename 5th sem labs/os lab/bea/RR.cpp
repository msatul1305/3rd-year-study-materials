#include<iostream>
using namespace std;
int main()
{

 float avg=0.0;
 int total,n,sum=0,i=0,t;
 cout<<"enter the no of processes";
 cin>>n;
  int bt[n],w[n]={0},ta[n],lst[n]={0},ini[n]={0},complete=0;
 cout<<"Enter execution times";
 for(i=0;i<n;i++)
 {
  cin>>bt[i];
 }
 cout<<"enter the time quantum:"<<endl;
 cin>>t;
 int time=1;
 
for(i=0;i<n;i++){
	sum+=(bt[i]);
}
//for(i=0;i<=sum;i=i+2){}
i=0;
while(i<=sum){
	if(bt[i]>t){
	
	}	
}
 
 
 
 
 
 for(i=0;i<n;i++)
 {
 cout<<"Waiting time for process p["<<i+1<<"]"<<":";
 cout<<w[i];
 cout<<"\n";
 avg+=w[i];
 }
 avg=avg/n;
 cout<<"Average waiting time:"<<avg<<"\n";
 return 0;
 }
