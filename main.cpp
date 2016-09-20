#include<iostream>
#define int int64_t
#define REP(i, a, b) for (int64_t i = (int64_t)(a); i < (int64_t)(b); i++)
using namespace std;

signed main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	REP(a, 1, 1000)REP(b, a + 1, 1000) {
		int c = 1000 - a - b;
		if (a * a + b * b == c * c) {
			cout << a * b * c << endl;
			return 0;
		}
	}
	return 0;
}
