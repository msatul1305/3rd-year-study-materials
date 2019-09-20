#include<iostream>
#include<string.h>
using namespace std;
main(){
char arr[100],arr1[100];
cout<<"enter the data";
cin>>arr;
int length=strlen(arr),i=0,j=0;
	while(i<=length){
		if(arr[i]=='0'&&arr[i+1]=='1'&&arr[i+2]=='1'&&arr[i+3]=='1'&&arr[i+4]=='1'&&arr[i+5]=='1'){
			for(int k=0;k<=5;k++){
			arr1[j]=arr[i];
			i++;
			j++;
			}
			arr1[j]='0';
			j++;
		}
		else{
		arr1[j]=arr[i];
		i++;
		j++;
		}
	}
	cout<<arr1<<endl;
}
