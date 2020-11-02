#include<iostream>
using namespace std;
int main(){
	int map[128] ={0};
	string str1;
	cin>>str1;
	for(int i=0;i<str1.size();i++){
		map[str1[i]]++; 
	}
	while(map['P']>0||map['A']>0||map['T']>0||map['e']>0||map['s']>0||map['t']>0){
		if(map['P']-- > 0) cout<<'P';
		if(map['A']-- > 0) cout<<'A';
		if(map['T']-- > 0) cout<<'T';
		if(map['e']-- > 0) cout<<'e';
		if(map['s']-- > 0) cout<<'s';
		if(map['t']-- > 0) cout<<'t';
	}
	return 0;
}
