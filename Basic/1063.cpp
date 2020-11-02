#include<iostream>
#include<vector>
#include<set>
#include<cmath>

using namespace std;

int main(){
	int N;
	cin>>N;
	float n1,n2;
	float max=0;
	for(int i=0;i<N;i++){
		cin>>n1>>n2;
		if((n1*n1+n2*n2)>max){
			max= n1*n1 + n2*n2;
		}
	}
	float res = sqrt(max);
	printf("%0.2f",res);
	return 0; 
}
