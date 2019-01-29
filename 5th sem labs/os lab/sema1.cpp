#include<bits/stdc++.h>
using namespace std;
main(){
	int cons,prod,buffer=0,op,max_buffer=1000;
	cout<<"enter the option: 1.produce\n2.consume\n3.exit\n";
	cin>>op;
	while(1){
	switch(op){
		case 1:
			cout<<"\nenter the production amount:\n ";
			cin>>prod;
			if(buffer+prod>max_buffer){
				cout<<"\ncan't store!amount is greater than buffer capacity!\n";
			}
			else{
			buffer=buffer+prod;
			cout<<"\nproduced amount="<<prod<<endl;
			cout<<"\nnow buffer contains="<<buffer<<endl;
			}
			break;
		case 2:
			cout<<"enter the consume amount:\n ";
			cin>>cons;
			if(buffer==0){
				cout<<"\nbuffer empty!can't consume.\n";
			}
			else if(buffer<cons){
				cout<<"\nbuffer has less value than consumption amount,can't consume!\n";
			}
			else {
			buffer=buffer-cons;	
			cout<<"amount consumed="<<cons<<endl;
			cout<<"\nbuffer now contains="<<buffer<<endl;
			}
			break;
			
		case 3:
			exit(0);
		
	}	
	cout<<"\nenter the option: 1.produce\n2.consume\n3.exit\n";
	cin>>op;
	}
	
}
