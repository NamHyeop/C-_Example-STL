#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

/*
1.unique는 first와 result 두 개의 포인터로 이루어져있다.
2.first는 값을 삽입하는 포인터, result는 내가 넣으려고 하는 위치의 값이 first와 중복되는지 확인하는 포인터이다
3.그러므로 sort를 진행하고 unique를 진행하여 중복을 제거해줘야 한다. 그렇지 않으면 무의미한 작업이 반복된다.
*/

int main()
{
  vector<int> arr;
  //input data 가정
  sort(arr.begin(), arr.end());
  arr.resize( unique(arr.begin(), arr.end()) - arr.begin() );
}
