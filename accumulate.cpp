#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>

int main()
{
	std::vector<int> v{ 1, 2, 3, 4 };

	int sum = std::accumulate(v.begin(), v.end(), 0); // 배열안의 항목들을 시작부터 끝까지 더해주겠다. 1 + 2 + 3 + 4 = 10

	int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());//시작부터 끝까지 곱해주고 3번째 매개변수만큼 추가로 곱해준다 1*(1*2*3*4)= 24
	//int product = std::accumulate(v.begin(), v.end(), 2, std::multiplies<int>());//시작부터 끝까지 곱해주고 3번째 매개변수만큼 추가로 곱해준다 2*(1*2*3*4) = 48

	auto dash_fold = [](std::string a, int b) {
		return std::move(a) + '-' + std::to_string(b);
	};

	std::string s = std::accumulate(std::next(v.begin()), v.end(),
		std::to_string(v[0]), // start with first element
		dash_fold);

	// Right fold using reverse iterators
	std::string rs = std::accumulate(std::next(v.rbegin()), v.rend(),
		std::to_string(v.back()), // start with last element
		dash_fold);

	std::cout << "sum: " << sum << '\n' //10 출력
		<< "product: " << product << '\n' // 24 출력, product1은 48출력
		<< "dash-separated string: " << s << '\n'
		<< "dash-separated string (right-folded): " << rs << '\n';
}
