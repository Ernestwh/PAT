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
	int n,m,k,temp,a,b;
	cin>>n;
	vector<set<int>> v(n);
	for(int i=0;i<n;i++){
		cin>>m;
		set<int> s;
		for(int j=0;j<m;j++){
			cin>>temp;
			s.insert(temp);
		}
		v[i] = s;
	}
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>a>>b;
		int nc = 0,nt=v[b-1].size();
		for(auto it = v[a-1].begin();it!=v[a-1].end();it++){
			if(v[b-1].find(*it)==v[b-1].end()){
				nt++;
			}else{
				nc++;
			}
		}
		double ans = (double)nc/nt*100;
		printf("%0.1f%%\n",ans);
	}
	return 0;
}
