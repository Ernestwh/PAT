#include<iostream>
#include<map>
#include <string>
#include <vector>
using namespace std;

int main(){
	map<string, int> get;
	int m,n,s;
	cin>>m>>n>>s;
	if(m < s){
        cout << "Keep going..." << endl;
        return 0;
    }
	vector<string> res;
	string str;
	for(int i=1;i<=m;i++){
		cin>>str;
		if(get[str]==1){
			s++;
		}
		if(get[str]==0 && i==s){
			res.push_back(str);
			get[str]=1;
			s+=n;
		}
	}
	for(int i=0; i<res.size(); i++)
        cout << res[i] << endl;
    return 0;
}
