#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include <unordered_map>
#include<map> 
using namespace std;


int main(){
	int T;
	cin>>T;
	long long a,b,c;
	for(int i=0;i<T;i++){
		cin>>a>>b>>c;
		long long sum=a+b;
		if(a > 0 && b > 0 && sum < 0) {
			printf("Case #%d: true\n", i + 1);
		} else if(a < 0 && b < 0 && sum >= 0){
			printf("Case #%d: false\n", i + 1);
		} else if(sum > c) {
			printf("Case #%d: true\n", i + 1);
		} else {
			printf("Case #%d: false\n", i + 1);
		}
	}
	return 0;
}

