#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

int change(char c){
	if(c=='B') return 0;
	if(c=='C') return 1;
	if(c=='J') return 2;
}

int main(){
	char mp[3]={'B','C','J'};
	int N;
	cin>>N;
	vector<int> times_A(3),times_B(3);
	vector<int> hand_A(3),hand_B(3);
	char a,b;
	int k1,k2;
	for(int i=0;i<N;i++){
		cin>>a>>b;
		k1=change(a);
		k2=change(b);
		if((k1+1)%3==k2){
			times_A[0]++;
			times_B[2]++;
			hand_A[k1]++;
		}
		else if(k1==k2){
			times_A[1]++;
			times_B[1]++;
		}else{
			times_A[2]++;
			times_B[0]++;
			hand_B[k2]++; 
		}
	}
	cout<<times_A[0]<<" "<<times_A[1]<<" "<<times_A[2]<<endl;
	cout<<times_B[0]<<" "<<times_B[1]<<" "<<times_B[2]<<endl;
	int d1=0,d2=0;
	for(int i=0;i<3;i++){
		if(hand_A[i]>hand_A[d1]) d1=i;
		if(hand_B[i]>hand_B[d2]) d2=i;
	}
	cout<<mp[d1]<<" "<<mp[d2];
	 
}
