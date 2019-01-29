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

 float avg=0.0;
 int total,n,sum=0,i=0;
 cout<<"enter the no of processes";
 cin>>n;
  int e[n],arr[n],w[n],pos[n];
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
 for(i=0;i<n-1;i++){
 for(int j=0;j<n-i-1;j++){
 	if(arr[j]>arr[j+1]){
	swapp(&arr[j],&arr[j+1]);
	swapp(&pos[j],&pos[j+1]);
	swapp(&e[j],&e[j+1]);
     }
 }
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
