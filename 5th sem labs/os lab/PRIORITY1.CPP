#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
 int n,bt[5],eo[5],at[5],srt[5],pt[5],j,k,temp=0;
 float avg=0.0;
 int total,t,pos;
 int w[6];
// w[0]=0;
 int sum=0,i=0;
 cout<<"Enter burst times";
 for(i=0;i<5;i++)
 {
  cin>>bt[i];
 }
 cout<<"Enter arrival times";
 for(i=0;i<5;i++)
 {
  cin>>at[i];
 }
  cout<<"Enter priority";
 for(i=0;i<5;i++)
 {
  cin>>pt[i];
 }

 for(i=0;i<5;i++){
	w[i]=0;
	sum=0;
	eo[i]=0;
	srt[i]=bt[i];
 }
 pos=0;
 k=0;
 n=5;
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-i-1;j++){
     if(pt[j]>pt[j+1]){
     temp=pt[j];
     pt[j]=pt[j+1];
     pt[j+1]=temp;

     temp=srt[j];
     srt[j]=srt[j+1];
     srt[j+1]=temp;

     temp=at[j];
     at[j]=at[j+1];
     at[j+1]=temp;
     }
     else if(pt[j]==pt[j+1]){
	if(at[j]>at[j+1]){
	temp=pt[j];
	pt[j]=pt[j+1];
	pt[j+1]=temp;
	}
     }
 }
 }
// cout<<"sorted array"<<endl;
cout<<endl<<"pt"<<endl;
 for(i=0;i<n;i++)cout<<pt[i]<<" ";
 cout<<endl<<"bt"<<endl;
 for(i=0;i<n;i++)cout<<srt[i]<<" ";
 cout<<endl<<"at"<<endl;
 for(i=0;i<n;i++)cout<<at[i]<<" ";
 cout<<endl;
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
 cout<<"\nWaiting time for process p 3is:"<<0<<endl;
 for(i=0;i<n-1;i++)
 {
for(j=0;j<n;j++)
 {
 if(srt[i]==bt[j])pos=j+1;
 }
  sum=sum+srt[i];
 cout<<"Waiting time for process p "<<pos<<"is: ";
 cout<<sum-at[i+1];
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