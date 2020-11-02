#include<iostream>
using namespace std;
int main(){
	string pass;
	int N;
	cin>>pass>>N;
	string str;
	getchar();
	while(N){
		getline(cin,str);
		if(str!="#"){
			if(str==pass){
				cout<<"Welcome in";
				break;
			}else{
				cout<<"Wrong password: "<<str<<endl;
			}
		}else{
			break;
		}
		N--;
	}
	if(N==0) cout<<"Account locked";
	return 0;
}
