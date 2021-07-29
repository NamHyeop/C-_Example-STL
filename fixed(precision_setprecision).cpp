#include <iostream>
#include <iomanip>   // for setiosflags

using namespace std;

int main()
{
	float num = 12.34567;

	cout.fixed; //.을 붙치면 정밀도를 설정하는것
	cout << setprecision(10) << num << "\n"; //자리수 정밀도 설정

	cout.precision(2);               //가장 큰 자리수부터 2자리를 출력하겠다는 뜻
	cout << num << endl;           //출력 : 12

	cout.precision(3);
	cout << num << endl;           //출력 : 12.3

	cout.precision(4);
	cout << num << endl;           //출력 : 12.35  반올림

	cout << fixed;                 //소수점 자릿수 고정, << 표시 유의, 10번줄이랑 비교를 해보자
	cout.precision(1);
	cout << num << endl;           //출력 : 12.3

	cout.precision(3);
	cout << num << endl;           //출력 : 12.346

	cout.precision(5);
	cout << setiosflags(ios::showpoint) << num << endl;   //출력 : 12.34567


		cout.setf(ios::showpoint); // 끝의 0을 표시
	cout.precision(6);
	cout << num << endl;           //출력 : 12.345670

	return 0;
}
