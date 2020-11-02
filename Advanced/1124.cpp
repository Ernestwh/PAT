#include<iostream>
#include<algorithm>
#include<cctype>
#include<string.h>
#include<vector>
#include<cmath>
#include<unordered_map>
#include<set>
#include<map>
using namespace std;

int main(){
	int M,N,S;
	cin>>M>>N>>S;
	if(S>M){
		cout<<"Keep going...";
		return 0;
	} 
	set<string> group;
	string s;
	int cnt = 0;
	for(int i=0;i<M;i++){
		cin>>s;
		if(i>=S-1){
			if(cnt%N==0 && group.count(s)==0){
				group.insert(s);
				cout<<s<<endl;
				cnt=1;
			}else if(group.count(s)==1){
				continue;
			}else{
				cnt++;
			}
		} 
	}
	return 0;
}
