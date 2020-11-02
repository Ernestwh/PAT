#include<iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;

int main(){
	/*vector<string> vec;
	string s;
	while(cin>>s){
		vec.push_back(s);
	}
	reverse(vec.begin(),vec.end());
	for(int i=0;i<vec.size()-1;i++){
		cout<<vec[i]<<" ";
	}
	cout<<vec[vec.size()-1];
	return 0;*/
	stack<string> v;
	string s;
	while(cin>>s){
		v.push(s);
	}
	cout<<v.top();
	v.pop();
	while(!v.empty()){
		cout<<" "<<v.top();
		v.pop();
	}
	return 0;
}
