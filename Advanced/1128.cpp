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
	int K;
	cin>>K;
	int N;
	for(int i=0;i<K;i++){
		cin>>N;
		vector<int> v(N);
		bool flag = true;
		for(int j=0;j<N;j++){
			cin >> v[j];
			for (int t = 0; t < j; t++) {
				if (v[j] == v[t] || abs(v[j]-v[t]) == abs(j-t)) {
					flag = false;
					break;
				}
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
