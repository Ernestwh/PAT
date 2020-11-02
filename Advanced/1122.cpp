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
#include<set>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int G[210][210];
	int a,b;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		G[a][b]=G[b][a]=1;
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int n1;
		cin>>n1;
		set<int> vset;
		vector<int> vec(n1);
		for(int j=0;j<n1;j++){
			cin>>vec[j];
			vset.insert(vec[j]);
		}
		int flag = 1;
		if(n1!=n+1 || vset.size()!=n || vec[0]!=vec[n1-1]){
			cout<<"NO"<<endl;
			continue;
		}else{
			for(int j=1;j<vec.size();j++){
				if(G[vec[j]][vec[j-1]]!=1){
					flag=0;
					break;
				}
			}
		}
		if(!flag) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
