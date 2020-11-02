#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
	long long N1,M1,N2,M2;
	scanf("%lld/%lld %lld/%lld",&N1,&M1,&N2,&M2);
	if(N1 * M2 > N2 * M1) {
        swap(N1, N2);
        swap(M1, M2);
    }
	long long K;
	cin>>K;
	int num = 1;
	bool flag = false;
	while(N1*K>=M1*num) num++;
	while(N1*K<M1*num && K*N2>num*M2){
		if(gcd(num,K)==1){
			printf("%s%d/%d", flag == true ? " " : "", num, K);
			flag = true;
		}
		num++;
	}
	return 0;
}
