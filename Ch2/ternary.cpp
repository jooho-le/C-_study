#include <iostream>
using namespace std;

int main_ternary() {
    int a = 7;
    int b = 5;
    int result;

    result = a > b ? a : b; // a가 b보다 크면 a를, 그렇지 않으면 b를 result에 저장
    cout << "result = " << result << endl; 

    return 0;
}