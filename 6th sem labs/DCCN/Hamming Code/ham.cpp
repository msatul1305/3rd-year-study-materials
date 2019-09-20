#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
main(){
char str[100];
int r[9],i=0;
int no1=0;	//no of 1's
cout<<"enter 7 digit binary to be sent";
cin>>str;
	r[0]=str[0]^str[1]^str[3]^str[4]^str[6]-48;
	r[1]=str[0]^str[2]^str[3]^str[5]^str[6]-48;
	r[3]=str[1]^str[2]^str[3]-48;
	r[7]=str[4]^str[5]^str[6]-48;
		cout<<"Data sent is ";
int k=0,m[4]={0,1,3,7},j=0,lamda[7]={2,4,5,6,8,9,10},n,op=0;
	for(int i=0;i<strlen(str)+4;i++){
	k=m[j];
	n=lamda[op];
		if(i==k){
		cout<<r[k];
		j++;
		}
		else if(i==n){
		cout<<str[op];
		op++;
		}
	}
	cout<<"\n";
}

