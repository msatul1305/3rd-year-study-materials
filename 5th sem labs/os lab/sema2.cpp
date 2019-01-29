#include<bits/stdc++.h>
using namespace std;
main(){
	int readcnt=0,wrt=0,choice,data[10]={0},i=0;
	cout<<"enter the choice \n1.start read\n2.start write\n3.stop write\n4.stop read\n5.exit\n";
	cin>>choice;
	while(1){
	switch(choice){
		case 1:
		 	if(wrt==1){
				cout<<"\n can't read!Write in progress!!\n";
			}
			else if(i==0){
				cout<<"no data found to read!";
			}
			else if(wrt==0){
			readcnt++;
			cout<<"\nno of readers currently reading="<<readcnt<<endl;
			cout<<"data read="<<data[i-1];	
			}
		
			break;
		case 2:
			if(readcnt>0){
				cout<<"\ncan't write when someone is reading!your changes will not be read!\n"<<endl;
			}
			else if(wrt==1)cout<<"\nanother writer is busy writing!\n";
			else{
				wrt=1;
				cout<<"enter the data to b written";
				cin>>data[i];
				i++;	
			}
		
			break;
		case 3:if(wrt==1){
			wrt =0;
		}
		else if(wrt==0)cout<<"writing is not going on!";
			break;
		case 4:
		if(readcnt>0)readcnt--;
		else cout<<"no readers currently reading!";
			break;
		case 5:exit(0);
		
	}
	cout<<"\nenter the choice \n1.start read\n2.start write\n3.stop write\n4.stop read\n5.exit\n";
	cin>>choice;	
	}
	
}
