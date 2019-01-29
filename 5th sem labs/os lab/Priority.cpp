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
 int total,t,pos,bt[n],eo[n],at[n],pt[n];
 int w[n];
 int sum=0,i=0;
 cout<<"Enter burst times";
 for(i=0;i<n;i++){
	cin>>bt[i];
 }
 cout<<"Enter arrival times";
 for(i=0;i<n;i++){
  cin>>at[i];
 }
	cout<<"Enter priority";
	
 for(i=0;i<n;i++){
  cin>>pt[i];
  w[i]=0;
	eo[i]=0;
 }
 pos=0;
 k=0;
 n=5;
 for(i=0;i<n-1;i++){
 for(j=0;j<n-i-1;j++){
 	
     if(pt[j]>pt[j+1]){
	swapp(&pt[j],&pt[j+1]);
	swapp(&bt[j],&bt[j+1]);
	swapp(&at[j],&at[j+1]);
     }
     else if(pt[j]==pt[j+1]){
	if(at[j]>at[j+1]){	
	swapp(&pt[j],&pt[j+1]);
	 }
    }
   }
  }
 
 cout<<"\nWaiting time for process p 3is:"<<0<<endl;
 for(i=0;i<n-1;i++){
for(j=0;j<n;j++){
 if(bt[i]==bt[j])pos=j+1;
 }
  sum=sum+bt[i];
 cout<<"Waiting time for process p "<<pos<<"is: ";
 cout<<sum-at[i+1];
 cout<<"\n";
 avg+=sum;
 }
 avg=avg/n;
 cout<<"Average waiting time:"<<avg<<"\n";
 return 0;
 }
 
