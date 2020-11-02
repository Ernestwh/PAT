#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int range[2]={0,0};
//int dp[1010][1010];
int findlong(string s,int low,int *range){
	int high = low;
	while(high<s.length()-1 && s[high+1]==s[low]){
		high++;
	}
	int ans = high;
	while(low>0 && high<s.length()-1 && s[low-1]==s[high+1]){
		low--;
		high++;
	}
	if((range[1]-range[0])<(high-low)){
		range[1]=high;
		range[0]=low;
	}
	return ans;
}
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		i = findlong(s,i,range);
	}
	int ans = range[1]-range[0]+1;
	cout<<ans;
	return 0;
	/*int ans=1;
	int len = s.length();
	for(int i=0;i<len;i++){
		dp[i][i]=1;
		if(i<len-1 && s[i]==s[i+1]){
			dp[i][i+1]=1;
			ans=2;
		}
	}
	for(int l=3;l<=len;l++){
		for(int i=0;i+l-1<len;i++){
			int j = i + l -1;
			if(s[i]==s[j]&& dp[i+1][j-1]==1){
				dp[i][j]=1;
				ans = l;
			}
		}
	}
	cout<<ans;*/
	return 0;
}
