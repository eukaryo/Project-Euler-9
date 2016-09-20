#include<iostream>
#include<iomanip>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<vector>
#include<array>
#include<string>
#include<stack>
#include<queue>
#include<algorithm>
#include<cassert>
#include<functional>
#include<random>
#include<complex>
#include<boost/multiprecision/cpp_int.hpp>
#define int int64_t
#define REP(i, a, b) for (int64_t i = (int64_t)(a); i < (int64_t)(b); i++)
#define rep(i, a) REP(i, 0, a)
#define EACH(i, a) for (auto i: a)
#define ITR(x, a) for (auto x = a.begin(); x != a.end(); x++)
#define ALL(a) (a.begin()), (a.end())
#define HAS(a, x) (a.find(x) != a.end())
#define Min(x) *min_element(ALL(x))
#define Max(x) *max_element(ALL(x))
#define Unique(L) (L.erase(unique(ALL(L)), L.end()))
using namespace std;
typedef boost::multiprecision::cpp_int bigint;

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
