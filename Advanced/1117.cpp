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
	int N;
	cin>>N;
	int A[100001];
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	sort(A,A+N,greater<int>());
	int E = 0;
	while(E<N && A[E]>E+1) E++;
	cout<<E;
	return 0;
}
