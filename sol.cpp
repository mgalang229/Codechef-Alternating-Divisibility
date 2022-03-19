#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	//i = odd
	//a[i+1] % a[i] == 0
	
	//i = even
	//a[i+1] % a[i] != 0
	
	//1 2 3 6 5 10 7 14 9
	
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; i++) { // fill with nos. from 1 to N (inclusive)
		vec[i] = i + 1;
	}
	for(int i = 0; i < n; i++) { // in even positions, the value must be a multiple of the previous no.
		if((i + 1) % 2 == 0) {
			vec[i] = vec[i-1] * 2;
		}
	}
	for(auto& x : vec) { // output
		cout << x << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}

