#include <bits/stdc++.h>

using namespace std;

int GetFactorization(int x) {
	int cnt = 0;
	while (x % 2 == 0) {
		cnt++;
		x /= 2;
	}
	for (int i = 3; i <= (int) sqrt(x); i += 2) {
		while (x % i == 0) {
			cnt++;
			x /= i;
		}
	}
	if (x > 1) {
		cnt++;
	}
	return cnt;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, k;
		cin >> x >> k;
		// check if the number of prime factors of 'x' is greater than or equal to 'k'
		int cnt = GetFactorization(x);
		cout << (cnt >= k ? 1 : 0) << '\n';
	}
	return 0;
}
