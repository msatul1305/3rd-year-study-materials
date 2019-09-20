#include<iostream>
#include<string.h>
using namespace std;
main(){
char arr[100],arr1[100];
cout<<"enter the data";
cin>>arr;
int length=strlen(arr),i=0,j=0;
	while(i<=length){
				//cout<<endl<<"j="<<j<<endl;
		if(arr[i]=='0'&&arr[i+1]=='1'&&arr[i+2]=='1'&&arr[i+3]=='1'&&arr[i+4]=='1'&&arr[i+5]=='1'&&arr[i+6]=='1'&&arr[i+7]=='0'){
		//cout<<endl<<"inside if"<<endl;
			//arr1[j]='0';
									//cout<<endl<<"arr1= "<<arr1<<endl;
			j++;
			for(int l=0;l<=5;l++){
			//arr1[j]='1';
									//cout<<endl<<"arr1= "<<arr1<<endl;
			j++;
			}
			//arr1[j]='0';
								//	cout<<endl<<"arr1= "<<arr1<<endl;
			j++;
			//cout<<endl<<"j="<<j<<endl;
			for(int k=0;k<=7;k++){
			arr1[j]=arr[i];
							//		cout<<endl<<"arr1= "<<arr1<<endl;
			i++;
			j++;
			}
						//cout<<endl<<"j="<<j<<endl;
						//cout<<endl<<"arr1= "<<arr1<<endl;
		}
		
		else{
		//cout<<"inside else";
		arr1[j]=arr[i];
		i++;
		j++;
		}
	}
	cout<<"sent data= "<<arr1<<endl;
	cout<<"length of actual data="<<strlen(arr)<<endl;
	cout<<"length of sent data="<<strlen(arr1)<<endl;
	if(strcmp(arr,arr1)==0)
	cout<<"arr=arr1"<<endl;
}
