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
  int e[n],w[n],c[n],ta[n];
 cout<<"Enter execution times";
 for(i=0;i<n;i++)
 {
  cin>>e[i];
 }
 for(i=0;i<n-1;i++){
 for(int j=0;j<n-i-1;j++){
 	if(e[j]>e[j+1]){
	swapp(&pos[j],&pos[j+1]);
	swapp(&e[j],&e[j+1]);
     }
 }
}
 for(i=0;i<n;i++)
 {
sum+=e[i];
 c[i]=sum;
 cout<<"Turn Around time for process p["<<pos[i]<<"]"<<":";
 ta[i]=c[i];
 cout<<ta[i];
 cout<<"\n";
 }
 for(i=0;i<n;i++)
 {
 cout<<"Waiting time for process p["<<pos[i]<<"]"<<":";
 w[i]=ta[i]-e[i];
 cout<<w[i];
 cout<<"\n";
 avg+=w[i];
 }
 avg=avg/n;
 cout<<"Average waiting time:"<<avg<<"\n";
 return 0;
 }
