#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	long long int n;
	long long int b;
	cin>>n>>b;
	vector<string> vec;
	while(n){
		vec.push_back(to_string(n%b));
		n=n/b;
	}
	int flag = true;
	for(int i=0;i<vec.size()/2;i++){
		if(vec[i]!=vec[vec.size()-i-1]){
			flag = false;
		}
	}
	if(flag){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	cout<<vec[vec.size()-1];
	for(int i=vec.size()-2;i>=0;i--){
		cout<<" "<<vec[i];
	}
	return 0;
}
