#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x1, y1, x2, y2, x3, y3, x4, y4;
	double X1, Y1, X2, Y2, X3, Y3;
	while (!cin.eof() && cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
		if (x1 == x3 && y1 == y3) {
			X1 = x2;
			Y1 = y2;
			X2 = x1;
			Y2 = y1;
			X3 = x4;
			Y3 = y4;
		}
		else if (x1 == x4 && y1 == y4) {
			X1 = x2;
			Y1 = y2;
			X2 = x1;
			Y2 = y1;
			X3 = x3;
			Y3 = y3;
		}
		else if (x2 == x3 && y2 == y3) {
			X1 = x1;
			Y1 = y1;
			X2 = x2;
			Y2 = y2;
			X3 = x4;
			Y3 = y4;
		}
		else if (x2 == x4 && y2 == y4) {
			X1 = x1;
			Y1 = y1;
			X2 = x2;
			Y2 = y2;
			X3 = x3;
			Y3 = y3;
		}

		const auto dx = X3 - X2;
		const auto dy = Y3 - Y2;

		auto X4 = X1 + dx;
		X4 = round(X4 * 1000) / 1000;
		auto Y4 = Y1 + dy;
		Y4 = round(Y4 * 1000) / 1000;

		cout << fixed << setprecision(3) << X4 << ' ' << Y4 << '\n';
	}

	return 0;
}