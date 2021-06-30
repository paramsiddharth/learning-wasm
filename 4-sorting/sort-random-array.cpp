#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

int main() {
	const int size = 1e7;

	srand(time(nullptr));

	auto start = chrono::high_resolution_clock::now();

	vector<int> arr(size);

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (int)1e6;
	}

	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

	cout << "Array generated in " << duration << "ms." << endl;

	start = chrono::high_resolution_clock::now();

	sort(arr.begin(), arr.end());

	end = chrono::high_resolution_clock::now();
	duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

	cout << "Array sorted in " << duration << "ms." << endl;

	return EXIT_SUCCESS;
}