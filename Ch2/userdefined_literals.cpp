#include <iostream>
using namespace std;

const long double kmper_meter = 1.609344L;

long double operator"" _km(long double val) // _km이라는 사용자 정의 리터럴을 선언
{
    return val; // 아무런 작업 없이 그대로 반환 
}

long double operator"" _m(long double val) // _m이라는 사용자 정의 리터럴을 선언
{
    return val * kmper_meter; // 입력된 값을 km로 변환하여 반환 
}

int main_userdefined_literals() {
    long double distance1 = 5.0_km; // 5.0 km를 나타내는 사용자 정의 리터럴 사용
    long double distance2 = 500.0_m; // 500.0 m를 나타내는 사용자 정의 리터럴 사용

    cout << "Distance 1: " << distance1 << " km" << endl; // distance1 출력
    cout << "Distance 2: " << distance2 << " km" << endl; // distance2 출력 (m에서 km로 변환된 값)

    return 0;
}