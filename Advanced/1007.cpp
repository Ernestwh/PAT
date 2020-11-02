#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int k;
	cin>>k;
	vector<int> vec(k);
	int leftindex = 0, rightindex = k - 1, sum = -1, temp = 0, tempindex = 0;
	for(int i=0;i<k;i++){
		cin>>vec[i];
		temp+=vec[i];
		if(temp>sum){
			sum = temp;
			leftindex = tempindex;
			rightindex = i;
		}else if(temp<0){
			temp=0;
			tempindex = i+1;
		}
	}
	if(sum<0) sum=0;
	cout<<sum<<" "<<vec[leftindex]<<" "<<vec[rightindex];
	return 0;
}
