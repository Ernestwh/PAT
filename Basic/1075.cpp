#include<iostream>
#include<vector>

using namespace std;

int main(){
	int first,n,k,temp;
	cin>>first>>n>>k;
	int data[100005],next[100005],list[100005];
	for(int i=0;i<n;i++){
		cin>>temp;
		cin>>data[temp]>>next[temp];
	}
	int sum=0;
	while(first!=-1){
		list[sum++] = first;
		first = next[first];
	}
	vector<int> vec[3];
	for(int i=0;i<sum;i++){
		if(data[list[i]]<0){
			vec[0].push_back(list[i]);
		}
		else if(data[list[i]]>=0 && data[list[i]]<=k){
			vec[1].push_back(list[i]);
		}
		else{
			vec[2].push_back(list[i]);
		}
	}
	int flag = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (flag == 0) {
                printf("%05d %d ", vec[i][j], data[vec[i][j]]);
                flag = 1;
            } else {
                printf("%05d\n%05d %d ", vec[i][j], vec[i][j], data[vec[i][j]]);
            }
        }
    }
	printf("-1");

	return 0;
}
