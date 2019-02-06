#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Select from the options.\n";
	int c;cout<<"1.Reader\n2.Writer\n3.Free Reader\n4.Free Writer\n5.Exit\nEnter your choice:";cin>>c;
	int fr = 0,fw = 0;
	while(c!=5){
		if(c==1){
			if(fw){
				cout<<"Writer is writing cannot read now.\n";
			}else{
				cout<<"Reader is reading...\n";
				fr++;			
			}
		}
		else if(c==2){
			if(fw){
				cout<<"Some other writer is writing free that writer.\n";
			}else if(fr){
				cout<<"Some reader is reading free the file first.\n";

			}else{
				cout<<"Writer is writing...\n";
				fw = 1;
			}
		}
		else if(c==3){
			if(fr>0){
				fr--;
				cout<<"Reader freed\n";
			}else{
				cout<<"No reader is reading so no reader to free.\n";
			}
		}
		else if(c==4){
			if(fw>0){
				fw--;
				cout<<"Writer Freed.\n";
			}else{
				cout<<"No writer is writing so no writer to free.\n";
			}
		}
		cout<<"Enter your choice:";cin>>c;
	}
	//sleep(1000);
	return 0;
}
