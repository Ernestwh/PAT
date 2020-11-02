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


int main(){
	int N;
	cin>>N;
	int A[N] = {0};
	int res=0;
	int tmp;
	for(int i=0;i<N;i++){
		cin>>tmp;
		A[tmp] = i;
	}
	for(int i=1;i<N;i++){
		if(i!=A[i]){
			while(A[0]!=0){
				swap(A[0],A[A[0]]);
				res++;
			}
			if(i!=A[i]){
				swap(A[0],A[i]);
				res++;
			}
		}
	}
	cout<<res;
	return res;
}
	
	

