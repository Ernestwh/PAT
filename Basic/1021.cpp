#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
	string s;
	vector<int> vec(10);
	cin>>s;
	for(int i=0;i<s.size();i++){
		vec[s[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(vec[i]!=0){
			cout<<i<<":"<<vec[i]<<endl;
		}
	
	}
	return 0;
}
