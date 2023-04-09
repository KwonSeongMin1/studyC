#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b, int n) {

    int cola;
    int result = 0;


    while (1) {
       result += n / a * b; // 받은 콜라병 개수
       cola = n / a * b; // 받을 콜라병 개수 따로 저장
       n -= n / a * a; // 빠진 콜라병 개수 먼저 계산 후
       n += cola; // 받을 콜라병 개수 채우기
       if (n/a <= 0) break;
    }
    return result;
}


int main() {
    solution(3, 2, 20);
}