#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<stack>
using namespace std;

vector<int> v[100005];
vector<double> amount(100005);
double sum =  0;
double p,r;

void dfs(int index,int depth){
	if(v[index].size()==0){
		sum+=amount[index]*p*pow((1+r/100),depth);
		return ;
	}
	for(int i=0;i<v[index].size();i++){
		dfs(v[index][i],depth+1);
	}
}

int main(){
	int n,k,c;
	cin>>n;
	cin>>p>>r;
	for(int i=0;i<n;i++){
		cin>>k;
		if(k){
			for(int j=0;j<k;j++){
				cin>>c;
				v[i].push_back(c);
			}
		}else{
			cin>>c;
			amount[i] = c*1.0;
		}
	}
	dfs(0,0);
	printf("%.1f",sum);
}
