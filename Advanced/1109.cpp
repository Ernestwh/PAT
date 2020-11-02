#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
using namespace std;

struct stu{
	string name;
	int high;
};

bool cmp(stu a,stu b){
	return a.high!=b.high?a.high>b.high:a.name<b.name;
}

int main(){
	int N,K;
	cin>>N>>K;
	vector<stu> vec(N);
	string name;
	int high;
	for(int i=0;i<N;i++){
		cin>>vec[i].name;
		cin>>vec[i].high;
	}
	sort(vec.begin(),vec.end(),cmp);
	int t=0,row=K;
	int m;
	while(row){
		if(row==K){
			m = N -N/K *(K-1);
		}else{
			m = N/K;
		}
		vector<string> ans(m);
		ans[m/2] = vec[t].name;
		
		int j=m/2-1;
		for(int i = t+1;i<t+m;i=i+2){
			ans[j--]=vec[i].name;
		}
		j = m/2+1;
		for(int i=t+2;i<t+m;i=i+2){
			ans[j++] = vec[i].name;
		}
		cout<<ans[0];
		for(int i=1;i<m;i++){
			cout<<" "<<ans[i];
		}
		cout<<endl;
		t=t+m;
		row--;
	}
	return 0;
}
