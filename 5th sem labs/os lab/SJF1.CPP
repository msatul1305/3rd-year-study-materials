#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
 int n,bt[4],eo[4],at[4],srt[4],j,k,temp=0;
 float avg=0.0;
 int total,t,pos;
 int w[6];
// w[0]=0;
 int sum=0,i=0;
 cout<<"Enter burst times";
 for(i=0;i<4;i++)
 {
  cin>>bt[i];
 }
 cout<<"Enter arrival times";
 for(i=0;i<4;i++)
 {
  cin>>at[i];
 }
 for(i=0;i<4;i++){
	w[i]=0;
	sum=0;
	eo[i]=0;
	srt[i]=bt[i];
 }
 pos=0;
 k=0;
 n=4;
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-i-1;j++){
     if(srt[j]>srt[j+1]){
     temp=srt[j];
     srt[j]=srt[j+1];
     srt[j+1]=temp;
     }
 }
 }
// cout<<"sorted array"<<endl;

 for(i=0;i<n;i++)cout<<srt[i]<<" ";
/* for(i=0;i<4;i++)
 {
	for(j=0;j<n;j++)
	{
	if(bt[j]==srt[i]&&eo[j]!=0){
	eo[j]=k;
	if(k==0)pos=j;
	k++;
	}
	}
 }
 w[pos]=0;
// sum=bt[pos];
 for(k=1;k<n;k++)
 {
 i=0;
 while(i<4){
	 if(eo[i]==k){
	 sum=sum+bt[eo[i]-1];
	 w[i]=sum;
	 break;
	 }
	 else {
	 i++;
	 }
	 }
 }
 */
 cout<<"\nWaiting time for process p 2is:"<<0<<endl;
 for(i=0;i<n-1;i++)
 {
for(j=0;j<n;j++)
 {
 if(srt[i]==bt[j])pos=j+1;
 }
  sum=sum+srt[i];
 cout<<"Waiting time for process p "<<pos<<"is: ";
 cout<<sum;
 cout<<"\n";
 avg+=sum;
 }
 avg=avg/n;
// total=(p[0]+p[1]+p[2]+p[3]+p[4]+p[5]);
 cout<<"Average waiting time:"<<avg<<"\n";
// }
 getch();
 return 0;
 }