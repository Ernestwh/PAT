#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<stack>
#include<queue>
using namespace std;


long long convert(string n,long long radix){
	long long sum=0;
	int index = 0,temp = 0;
	for(int i=n.size()-1;i>=0;i--){
		temp = isdigit(n[i])? n[i]-'0':n[i]-'a'+10;
		sum += temp*pow(radix,index++);
	}
	return sum;
}
long long find_radix(string n, long long num) {
	char it = *max_element(n.begin(), n.end());
	long long low = (isdigit(it) ? it - '0': it - 'a' + 10) + 1;
	long long high = max(num, low);
	while (low <= high) {
		long long mid = (low + high) / 2;
		long long t = convert(n, mid);
		if (t < 0 || t > num) high = mid - 1;
		else if (t == num) return mid;
		else low = mid + 1;
	}
	return -1;
}
int main(){
	string n1,n2;
	long long tag = 0, radix = 0, result_radix;
	cin>>n1>>n2>>tag>>radix;
	result_radix = tag == 1? find_radix(n2,convert(n1,radix)):find_radix(n1,convert(n2,radix));
	if(result_radix!=-1){
		printf("%lld", result_radix);
	}else{
		printf("Impossible");
	} 
	return 0;
}
