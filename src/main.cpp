#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	int m;
	cin >> m;

	auto mx = int{ m };
	while (0 < (n--)) {
		int a, b;
		cin >> a >> b;

		m += a;
		m -= b;
		if (m < 0) {
			cout << 0;
			return 0;
		}

		if (mx < m) {
			mx = m;
		}
	}

	cout << mx;

	return 0;
}