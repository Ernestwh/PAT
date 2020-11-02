#include<iostream>
#include<vector>
#include<algorithm>
#include <string.h>
using namespace std;
struct stu{
	long long int no;
    int score, finarank, loca, locarank;
};
bool cmp1(stu a,stu b){
	return a.score != b.score ? a.score > b.score : a.no < b.no;
}
int main(){
	int N;
	cin>>N;
	int k;
	vector<stu> vec;
	long long int no;
	int score;
	vector<stu> fin;
	for(int i=1;i<=N;i++){
		cin>>k; 
		vector<stu> vec(k);
		for(int j=0;j<k;j++){
			cin>>vec[j].no>>vec[j].score;
			vec[j].loca = i;
		}
		sort(vec.begin(),vec.end(),cmp1);
		vec[0].locarank=1;
		fin.push_back(vec[0]);
		for(int j=1;j<k;j++){
			if(vec[j].score == vec[j-1].score){
				vec[j].locarank = vec[j-1].locarank;
			}else{
				vec[j].locarank=j+1;
			}
			fin.push_back(vec[j]);
		}
	}
	sort(fin.begin(),fin.end(),cmp1);
	fin[0].finarank=1;
	for(int i=1;i<fin.size();i++){
		if(fin[i].score==fin[i-1].score){
			fin[i].finarank = fin[i-1].finarank;
		}else{
			fin[i].finarank = i+1;
		}
	}
	cout<<fin.size()<<endl;
	for(int i=0;i<fin.size();i++){
		printf("%013lld %d %d %d\n", fin[i].no, fin[i].finarank, fin[i].loca,fin[i].locarank);	
	}
	return 0;
}
