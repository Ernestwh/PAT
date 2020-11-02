#include <iostream>
#include <vector>
#include <map>
using namespace std;
int m, n, tol;
vector<vector<int>> vec;
int dir[8][2] = { {-1,-1},{ -1, 0 },{ -1, 1 },{ 0, 1 },{ 1, 1 },{ 1, 0 },{ 1, -1 },{ 0, -1 } };

bool judge(int i, int j) {
	for (int k = 0; k < 8; k++) {
		int tx = i+dir[k][0];
		int ty = j+dir[k][1];
		if(tx>=0 && tx<n && ty>=0 && ty<m && abs(vec[tx][ty]-vec[i][j])<=tol){
			return false;
		}
	}
	return true;
}
int main()
{
	int cnt = 0, x = 0, y = 0;
	cin >> m >> n >> tol;
	vec.resize(n, vector<int>(m));
	map<int, int> mapp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> vec[i][j];
			mapp[vec[i][j]]++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(mapp[vec[i][j]]++==1 && judge(i, j) == true) {
				cnt++;
				x = i + 1;
				y = j + 1;
			}
		}
	}
	if (cnt == 1)
		printf("(%d, %d): %d", y, x, vec[x - 1][y - 1]);
	else if (cnt == 0)
		printf("Not Exist");
	else
		printf("Not Unique");
    return 0;
}

