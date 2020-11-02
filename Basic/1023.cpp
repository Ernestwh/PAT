#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
	vector<int> vec(10,0);
	for(int i=0;i<10;i++){
		cin>>vec[i];
	}
	for(int i=1;i<10;i++){
		if(vec[i]!=0){
			cout<<i;
			vec[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++){
		while(vec[i]!=0){
			cout<<i;
			vec[i]--;
		}
	}
	return 0;
}
