#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int num, sum = 0;
		cin >> num;

		int start = 1;
		for (; start <= num;) {
			sum += start;
			++start;
		}

		cout << "Sum from 1 to " << num << " = " << sum << "\n";
	}
	return 0;
}
