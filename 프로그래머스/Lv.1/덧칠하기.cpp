#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
	int section_size = section.back() - section.front() + 1;

	bool* paint = new bool[n+100000];
	for (int i = 1; i <= n; i++) {
		paint[i] = true;
	}	// 1 2 3 4 5 6 7 8

	for (int i = 0; i < section.size(); i++) {
		paint[section[i]] = false;
	} // 1o 2x 3x 4o 5o 6x 7o 8o

	for (int i = 1; i <= n; i++) {
		if (paint[i] == false) {
			for (int j = i; j < i + m; j++) {
				paint[j] = true;
			}
			answer++;
		}
	}

    return answer;
}

int main() {
	solution(8, 4, { 2,3,6 });
}