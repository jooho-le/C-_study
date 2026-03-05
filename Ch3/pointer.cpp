#include <iostream>
using namespace std;

int main_pointer() {
    char char_val = 'A';
    int int_val = 123;
    double double_val = 123.456;

    char* char_pointer_val = &char_val;
    int* int_pointer_val = &int_val;
    double* double_pointer_val = &double_val;

    // 일반 변수의 데이터 출력
    cout << "char_val: " << char_val << endl;
    cout << "int_val: " << int_val << endl;
    cout << "double_val: " << double_val << endl;
    cout << endl;   

    // 역참조 연산자로 포인터 변수가 가리키는 데이터 출력
    cout << "*char_pointer_val: " << *char_pointer_val << endl;
    cout << "*int_pointer_val: " << *int_pointer_val << endl;
    cout << "*double_pointer_val: " << *double_pointer_val << endl;
    cout << endl;

    // 역참조 연산자로 원본 데이터 덮어쓰기
    *char_pointer_val = 'Z';
    *int_pointer_val = 321;
    *double_pointer_val = 654.321;

    // 일반 변수의 데이터 출력(업데이트 확인)
    cout << "char_val: " << char_val << endl;
    cout << "int_val: " << int_val << endl;
    cout << "double_val: " << double_val << endl;   

    return 0;
}