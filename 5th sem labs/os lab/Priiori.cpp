#include<iostream>
using namespace std;
void swapp(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
 int n,j,k,temp=0;
 float avg=0.0;
 cout<<"enter the no of processes:";
 cin>>n;
 int total,t,bt[n],at[n],pt[n],pos[n],c[n],ta[n],w[n];
 int sum=0,i=0;
 cout<<"Enter burst times";
 for(i=0;i<n;i++){
	cin>>bt[i];
	pos[i]=i+1;
 }
 cout<<"Enter arrival times";
 for(i=0;i<n;i++){
  cin>>at[i];
 }
	cout<<"Enter priority";
 for(i=0;i<n;i++){
  cin>>pt[i];
 }
 for(i=0;i<n-1;i++){
 for(j=0;j<n-i-1;j++){
 	
     if(pt[j]>pt[j+1]){
	swapp(&pt[j],&pt[j+1]);
	swapp(&bt[j],&bt[j+1]);
	swapp(&at[j],&at[j+1]);
    swapp(&pos[j],&pos[j+1]);
	 }
     else if(pt[j]==pt[j+1]){
	if(at[j]>at[j+1]){	
	swapp(&pt[j],&pt[j+1]);
	swapp(&pos[j],&pos[j+1]);
	swapp(&bt[j],&bt[j+1]);
	swapp(&at[j],&at[j+1]);
	 }
    }
   }
  }
 for(i=0;i<n;i++)
 {
sum+=bt[i];
 c[i]=sum;
 cout<<"Turn Around time for process p["<<pos[i]<<"]"<<":";
 ta[i]=c[i]-at[i];
 cout<<ta[i];
 cout<<"\n";
 }
 for(i=0;i<n;i++)
 {
 cout<<"Waiting time for process p["<<pos[i]<<"]"<<":";
 w[i]=ta[i]-bt[i];
 cout<<w[i];
 cout<<"\n";
 avg+=w[i];
 }
 avg=avg/n;
 cout<<"Average waiting time:"<<avg<<"\n";
 return 0;
 }
 
