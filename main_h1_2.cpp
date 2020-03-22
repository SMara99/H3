#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>

T Summe(T v[], int begin, int end, T anfangswert = 10) {
	int index = begin;
	int summe = 0;
	while (index < end) {
		summe = summe + v[index];
		index++;
	}
	return summe + anfangswert;
}

template <class T>

T Summe_cu_lambda(T v[], int begin, int end, T anfangswert = 10) {
	vector <T> x;
	int index = begin;
	while (index <= end) {
		x.push_back(v[index]);
		index++;
	}
	int s = 0;
	std::for_each(x.begin(), x.end(), [&s](T aux) {s += aux; });
	return s + anfangswert;
}

int main() {
	int v[10] = { 1,3,9,11,52,73,91,8,7,101 };
	int s1 = Summe<int>(v, 0, 10);
	int s2 = Summe_cu_lambda(v, 0, 2);
	cout << "Prima suma: " << s1 << "\nAceeasi suma: " << s2;
}