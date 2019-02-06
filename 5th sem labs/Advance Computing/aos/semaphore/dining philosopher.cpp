#include<bits/stdc++.h>
using namespace std;
main(){
	int p[5],c[5],inp=0,pno;
	char s1[100],s2[100];
	strcpy(s1,"thinking");
	strcpy(s2,"eating");
	for(int i=0;i<5;i++){
		p[i]=0;
		c[i]=0;
	}
	while(1){
		cout<<"\nenter the philosopher no:";
	cin>>pno;
	cout<<"current state= ";
	if(p[pno]==0){
		cout<<s1<<endl;
	}
	else{
		cout<<s2<<endl;
	}
	cout<<"\nwhat do you want: \n1.start eat\n2.stop eat\n3.exit\n";
	cin>>inp;
	if(inp==3)exit(0);
	else{
	if(inp==1){
		if(pno!=4){
		if(c[pno]==0&&c[pno+1]==0){
			c[pno]=1;
			c[pno+1]=1;	
			p[pno]=1;
		}
		else{
			cout<<"\nchopstick not free!waiting..."<<endl;
		}
	}
	else if(pno==4){
		if(c[pno]==0&&c[pno-4]==0){
			c[pno]=1;
			c[pno-4]=1;	
			p[pno]=1;
		}
		else{
			cout<<"\nchopstick not free!waiting..."<<endl;
		 }
	}
	else if(inp==2){
		if(pno!=4){
			c[pno]=0;
			c[pno+1]=0;
			p[pno]=0;	
		}
	else if(pno==4){
			c[pno]=0;
			c[pno-4]=0;
			p[pno]=0;	
		}
	}
}
	}	
	}
	
	
}
