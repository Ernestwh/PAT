#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
using namespace std;


int main(){
	int k1;
	cin>>k1;
	vector<float> vec1(1002);
	int temp;
	for(int i=0;i<k1;i++){
		cin>>temp;
		cin>>vec1[temp];
	}
	int k2;
	cin>>k2;
	vector<float> vec2(1002);
	for(int i=0;i<k2;i++){
		cin>>temp;
		cin>>vec2[temp];
	}
	vector<float> vec3(2002);
	for(int i=0;i<vec1.size();i++){
		if(vec1[i]==0) continue;
		for(int j=0;j<vec2.size();j++){
			if(vec2[j]==0) continue;
			vec3[i+j]+=vec1[i]*vec2[j];
		}
	}
	int cnt=0;
	for(int i=0;i<vec3.size();i++){
		if(fabs(vec3[i])>=0.000001){
			cnt++;
		}
	}
	cout<<cnt;
	for(int i=2001;i>=0;i--){
		if(fabs(vec3[i])>=0.000001){
			printf(" %d %0.1f",i,vec3[i]);
		}
	}
	return 0;
}
