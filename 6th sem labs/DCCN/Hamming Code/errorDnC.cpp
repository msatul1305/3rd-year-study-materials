#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
main(){
char str[100];
int x;
int r[9],i=0;
int no1=0;	//no of 1's
cout<<"enter 11 digit received binary";
cin>>str;
	r[0]=str[0]^str[2]^str[4]^str[6]^str[8]^str[10];
	r[1]=str[1]^str[2]^str[5]^str[6]^str[9]^str[10];
	r[3]=str[3]^str[4]^str[5]^str[6];
	r[7]=str[7]^str[8]^str[9]^str[10];
	//cout<<r[0]<<r[1]<<r[3]<<r[7];
	/*cout<<"int of r0"<<(int)r[0]<<endl;
	cout<<"int of r1"<<(int)r[1]<<endl;
	cout<<"int of r3"<<(int)r[3]<<endl;
	cout<<"int of r7"<<(int)r[7]<<endl;
	*/
	x=(int)r[0]+((int)r[1])*2+((int)r[3])*4+((int)r[7])*8;
	cout<<"wrong digit is"<<x<<endl;
/*int k=0,m[4]={0,1,3,7},j=0,lamda[7]={2,4,5,6,8,9,10},n,op=0;
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
	*/
}

