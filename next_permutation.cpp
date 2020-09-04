//순열이 있을시 중복 없이 만들어주는 함수

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	vector<int> v(4); //테스트 백터 선언(밑에 사용법시 백터 초기화 필수)
 
	for (int i = 0; i<4; i++) //백터값 지정
  {
		v[i] = i + 1;
	}

	// next_permutation을 사용하여 순열 구하기
	do
  {
		for (int i = 0; i<4; i++)
    {
			cout << v[i] << " ";
		}

		cout << '\n';
	} while (next_permutation(v.begin(), v.end()));
	return 0;
}
