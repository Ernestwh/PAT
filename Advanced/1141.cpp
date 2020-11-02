#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
#include<queue>
using namespace std;

struct node{
	int rank;
	string school;
	int score;
	int numstu;
};
bool cmp(node a,node b){
	if(a.score!=b.score){
		return a.score>b.score;
	}else{
		if(a.numstu!=b.numstu){
			return a.numstu<b.numstu;
		}else{
			return a.school<b.school;
		}
	}
}

int main(){
	map<string,int> map1;
	map<string,double> map2;
	int n;
	cin>>n;
	string id,school;
	double score;
	for(int i=0;i<n;i++){
		cin>>id>>score;
		if(id[0]=='B'){
			score = score/1.5;
		}else if(id[0]=='T'){
			score = score*1.5;
		}
		cin>>school;
		for(int j=0;j<school.size();j++){
			school[j]=tolower(school[j]);
		}
		map1[school]++;
		map2[school]+=score;
	}
	vector<node> vec;
	for(auto it=map1.begin();it!=map1.end();it++){
		vec.push_back(node{0,it->first,(int)(map2[it->first]),map1[it->first]});
	}
	sort(vec.begin(),vec.end(),cmp);
	for(int i=0;i<vec.size();i++){
		vec[i].rank=i+1;
		if(i!=0 && vec[i].score==vec[i-1].score){
			vec[i].rank = vec[i-1].rank;
		}
	}
	cout<<vec.size()<<endl;
	for(int i=0;i<vec.size();i++){
		printf("%d %s %d %d\n",vec[i].rank,vec[i].school.c_str(),vec[i].score,vec[i].numstu);
	}
	return 0;
}
