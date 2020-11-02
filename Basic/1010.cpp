#include<iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;

int main(){
    int xs,zs;
	int a=1;
	do{
		cin>>xs>>zs;
		if(zs>0){
			if(a==1){
				cout<<xs*zs<<" "<<zs-1;
				a=0;
			}else{
				cout<<" "<<xs*zs<<" "<<zs-1;
			}
		}
		if(a==1){
			cout<<"0 0";
		}
	}while(getchar()!='\n');
	
	return 0;
}
