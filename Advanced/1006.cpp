#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>

using namespace std;

/*struct stu{
	string id;
	string signin;
	string signout;
};
bool cmp1(stu a,stu b){
	return a.signin<b.signin;
}

bool cmp2(stu a,stu b){
	return a.signout>b.signout;
}*/

int main(){
	int n;
	cin>>n;
	int minn = INT_MAX, maxn = INT_MIN;
	string unlocked, locked;
	for(int i=0;i<n;i++){
		string t;
		cin>>t;
		int h1, m1, s1, h2, m2, s2;
		scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
		int in = h1*3600+m1*60+s1;
		int out = h2*3600+m2*60+s2;
		if(in<minn){
			minn = in;
			unlocked = t;
		}
		if(out>maxn){
			maxn = out;
			locked = t;
		}
	}
	cout<<unlocked<<" "<<locked;
	/*string id,s1,s2;
	vector<stu> vec;
	for(int i=0;i<n;i++){
		cin>>id>>s1>>s2;
		vec.push_back(stu{id,s1,s2});
	}
	sort(vec.begin(),vec.end(),cmp1);
	cout<<vec[0].id;
	sort(vec.begin(),vec.end(),cmp2);
	cout<<" "<<vec[0].id;*/
	
	return 0;
}
