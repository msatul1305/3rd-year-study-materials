#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
 int p[6],arr[6];
 float avg;
 int total,t;
 int w[6];
// w[0]=0;
 int sum=0,i=0;
 cout<<"enter the no of test cases";
 cin>>t;
 while(t--)
 {
 cout<<"Enter execution times";
 for(i=0;i<=5;i++)
 {
  cin>>p[i];
 }
 cout<<"Enter arrival times";
 for(i=0;i<=5;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<=5;i++){
	w[i]=0;
	sum=0;
 }
 w[0]=p[0];
 sum=p[0];
 cout<<"Completion time for process p[0]:"<<w[0]<<endl;
 for(i=1;i<=5;i++)
 {
 cout<<"Completion time for process p["<<i+1<<"]"<<":";
 sum+=p[i];
 w[i]=sum;
 cout<<w[i];
 cout<<"\n";
 }
 cout<<"Turn Around time for process p[0]:"<<w[0]-arr[0]<<endl;
 for(i=1;i<=5;i++)
 {
 cout<<"Completion time for process p["<<i+1<<"]"<<":";
 cout<<w[i]-arr[i];
 cout<<"\n";
 }
 cout<<"Waiting time for process p[0]:"<<0<<endl;
 for(i=1;i<=5;i++)
 {
 cout<<"Completion time for process p["<<i+1<<"]"<<":";
 cout<<w[i-1]-arr[i];
 cout<<"\n";
 avg+=w[i-1]-arr[i];
 }
 avg=avg/6;
// total=(p[0]+p[1]+p[2]+p[3]+p[4]+p[5]);
 cout<<"Average waiting time:"<<avg<<"\n";
 }
 getch();
 return 0;
 }