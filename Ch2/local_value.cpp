#include <iostream>
using namespace std;

void print() {
    int value = 10;
    cout << "print 함수 내에서의 지역변수 value: " << value << endl;
}

int main_local_value() {
    int value = 5;
    cout << "main 함수 내부에서의 지역변수 value: " << value << endl;
    
    print();

    cout << "다시 main 함수 내부에서의 지역변수 value: " << value << endl;
    return 0;
}