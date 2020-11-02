#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> vec;
	for(int i=0;i<n;i++){
		int flag=0;
		string name,s;
		cin>>name>>s;
		int len = s.length();
		for(int j=0;j<len;j++){
			switch(s[j]){
				case '1' : s[j] = '@'; flag = 1; break;
				case '0' : s[j] = '%'; flag = 1; break;
				case 'l' : s[j] = 'L'; flag = 1; break;
				case 'O' : s[j] = 'o'; flag = 1; break;
			}
		}
		if(flag){
			string temp = name+" "+s;
			vec.push_back(temp);
		}
	}
	if(vec.size()){
		cout<<vec.size()<<endl;
		for(int i=0;i<vec.size();i++){
			cout<<vec[i]<<endl;
		}
	}else if(n==1){
		cout<<"There is 1 account and no account is modified";
	}else{
		cout<<"There are "<<n<<" accounts and no account is modified";
	}
	return 0;
}
