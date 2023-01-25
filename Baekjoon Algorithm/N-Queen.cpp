#include <iostream>

using namespace std;

int n, cnt;
int a[15];

bool checker(int idx) {
	for (int i = 0; i < idx; i++) 
		if (a[idx] == a[i] || idx - i == abs(a[idx] - a[i])) return 0;
	
	return 1;
}

void n_queen(int idx) {
	if (idx == n) {
		cnt++; return;
	}
	for (int i = 0; i < n; i++) {
		a[idx] = i;
		if (checker(idx)) {
			n_queen(idx + 1);
		}
	}
}

int main() {	
	cin >> n;
	n_queen(0);
	cout << cnt;

	return 0;
}