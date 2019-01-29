#include<bits/stdc++.h>
using namespace std;
main(){
	int cons,prod,buffer[10]={0},op,max=10,bufpos=0;
	cout<<"enter the option: 1.produce\n2.consume\n3.exit\n";
	cin>>op;
	while(1){
	switch(op){
		case 1:
			if(bufpos>max-1){
				cout<<"\ncan't store!buffer full!\n";
			}
			else{
				buffer[bufpos]=1;
			bufpos++;
			cout<<"\nproduced! amount available now ="<<bufpos<<"\n";
			}
			break;
		case 2:
			if(bufpos==0){
				cout<<"\nbuffer empty!can't consume.\n";
			}
			else {
				buffer[bufpos]=0;
			bufpos--;
			cout<<"consumed!amount available now="<<bufpos<<endl;
			}
			break;
			
		case 3:
			exit(0);
		
	}	
	cout<<"\nenter the option: 1.produce\n2.consume\n3.exit\n";
	cin>>op;
	}
	
}
