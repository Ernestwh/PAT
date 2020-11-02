#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<stack>
#include<set>
#include<math.h>
using namespace std;
int n,k,p,maxFacSum = -1;
vector<int> v,ans,tempans;

void init(){
	int temp = 0,index = 1;
	while(temp<=n){
		v.push_back(temp);
		temp = pow(index,p);
		index++;
	}
}
void dfs(int index,int tempsum,int tempk,int facsum){
	if(tempk == k){
		if(tempsum == n && facsum>maxFacSum){
			ans = tempans;
			maxFacSum = facsum;
		}
		return;
	}
	while(index>=1){
		if(tempsum+v[index]<=n){
			tempans[tempk] = index;
			dfs(index, tempsum + v[index], tempk + 1, facsum + index);
		}
		if(index == 1) return;
		index--;
	}
}
int main(){
	cin>>n>>k>>p;
	init();
	tempans.resize(k);
	dfs(v.size()-1,0,0,0);
	if(maxFacSum==-1){
		cout<<"Impossible";
		return 0;
	}
	printf("%d = ",n);
	for(int i=0;i<ans.size();i++){
		if(i!=0) printf(" + ");
		printf("%d^%d",ans[i],p);
	}
	return 0;
}


