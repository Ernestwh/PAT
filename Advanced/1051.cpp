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

int main(){
	int m,n,k;
	cin>>m>>n>>k;
	for(int i=0;i<k;i++){
		bool flag = false;
		stack<int> s;
		vector<int> vec(n+1);
		for(int i=1;i<=n;i++){
			cin>>vec[i];
		}
		int cur = 1;
		for(int j=1;j<=n;j++){
			s.push(j);
			if(s.size()>m) break;
			while(!s.empty() && s.top()==vec[cur]){
				s.pop();
				cur++;
			}
		}
		if(cur == n+1) flag = true;
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

