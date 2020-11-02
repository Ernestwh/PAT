#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
using namespace std;
int k[200005];
int main(){
	/*int N1;
	cin>>N1;
	vector<int> vec1(N1);
	for(int i=0;i<N1;i++){
		cin>>vec1[i];
	}
	int N2;
	cin>>N2;
	vector<int> vec2(N2);
	for(int i=0;i<N2;i++){
		cin>>vec2[i];
	}
	int N = (N1+N2+1)/2;
	int cnt = 0;
	int i=0,j=0;
	while(i<N1 && j<N2){
		if(vec1[i]<vec2[j]){
			cnt++;
			if(cnt==N){
				cout<<vec1[i];
				return 0;
			}
			i++;
		}else{
			cnt++;
			if(cnt==N){
				cout<<vec2[j];
				return 0;
			}
			j++;
		}
		
	}
	if(i==N1){
		while(j<N2){
			cnt++;
			if(cnt==N){
				cout<<vec2[j];
				return 0;
			}
			j++;
		}
	}else{
		while(i<N1){
			cnt++;
			if(cnt==N){
				cout<<vec1[i];
				return 0;
			}
			i++;
		}
	}
	return 0;*/
	int n, m, temp, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        scanf("%d", &k[i]);
    k[n + 1] = 0x7fffffff;
    cin >> m;
    int midpos = (n + m + 1) / 2, i = 1;
    for (int j = 1; j <= m; j++) {
        scanf("%d", &temp);
        while (k[i] < temp) {
            count++;
            if (count == midpos) cout << k[i];
            i++;
        }
        count++;
        if (count == midpos) cout << temp;
    }
    while (i <= n) {
    count++;
    if (count == midpos) cout << k[i];
    i++;
    }
    return 0;
}
