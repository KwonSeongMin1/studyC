#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b, int n) {

    int cola;
    int result = 0;


    while (1) {
       result += n / a * b; // ���� �ݶ� ����
       cola = n / a * b; // ���� �ݶ� ���� ���� ����
       n -= n / a * a; // ���� �ݶ� ���� ���� ��� ��
       n += cola; // ���� �ݶ� ���� ä���
       if (n/a <= 0) break;
    }
    return result;
}


int main() {
    solution(3, 2, 20);
}