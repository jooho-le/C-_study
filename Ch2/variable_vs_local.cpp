#include <iostream>
using namespace std;

int value = 1;

int main_variable_vs_local() {
    int value = -1;

    cout << value << endl; // main 함수 내부의 지역변수 value가 출력됨
    cout << ::value << endl; // 전역변수 value가 출력됨 
    
    return 0;
}