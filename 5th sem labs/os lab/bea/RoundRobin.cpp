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
 i=0;
 
 while(complete<n){ 	
  if(bt[i]==0)complete++;
 
 if(bt[i]>0){
	bt[i]--;
}
		if((time%t==0)||(bt[i]==0)){
		w[i]+=(lst[i]-ini[i]);
		cout<<"at time "<<time<<" lst["<<i<<"]="<<lst[i]<<" "<<"ini["<<i<<"]="<<ini[i]<<" "<<"bt["<<i<<"]= "<<bt[i]<<"wt["<<i<<"]= "<<w[i]<<endl<<endl;
		lst[i]=time;
		ini[i+1]=time;
		i++;
		
		}


 
 
 
	
 if(i==n)i=0;
 time++;
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
