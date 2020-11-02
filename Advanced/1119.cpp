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
vector<int> pos;
vector<int> pre;
vector<int> in;
bool none = true;

void getin(int preleft,int preright,int posleft,int posright){
	if(preleft==preright){
		in.push_back(pre[preleft]);
		return;
	}
	if(pre[preleft]==pos[posright]){
		int i = preleft+1;
		while(i<=preright &&pre[i]!=pos[posright-1]) i++;
		if(i-preleft>1)
			getin(preleft+1,i-1,posleft,posleft+(i-1)-preleft-1);
		else
			none = false;
		in.push_back(pos[posright]);
		getin(i,preright,posright-(preright-i)-1,posright-1);
	}
}

int main(){
	int n;
	cin>>n;
	pre.resize(n);
	pos.resize(n);
	for(int i=0;i<n;i++){
		cin>>pre[i];
	}
	for(int i=0;i<n;i++){
		cin>>pos[i];
	}
	getin(0,n-1,0,n-1);
	printf("%s\n%d", none == true ? "Yes" : "No", in[0]);
	for (int i = 1; i < in.size(); i++)
		printf(" %d", in[i]);
	printf("\n");
	return 0;
}
