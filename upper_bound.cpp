#include <iostream>
#include <algorithm>
using namespace std;

// arr[mid - 1] <= num && arr[mid] > num 

int nh_upper_bound(int *arr, int len, int num)
{
	int start = 0;
	int end = len;

	while (end - start > 0)
	{
		int mid = (start + end) / 2;
		if (arr[mid] <= num)
			start = mid + 1;
		else
			end = mid;
	}
	return end;
}

int main(void){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 8, 9 };

  //시작값은 0입니다.
	cout << "upper_bound(3) : " << upper_bound(arr, arr + 10, 3) - arr << endl;
	cout << "upper_bound(4) : " << upper_bound(arr, arr + 10, 4) - arr << endl;
	cout << "upper_bound(8) : " << upper_bound(arr, arr + 10, 8) - arr << endl;
	cout << "upper_bound(9) : " << upper_bound(arr, arr + 10, 9) - arr << endl;
	cout << "===================================================" << endl;
	cout << "nh_upper_bound(3) : " << nh_upper_bound(arr, 10, 3) << endl;
	cout << "nh_upper_bound(4) : " << nh_upper_bound(arr, 10, 4) << endl;
	cout << "nh_upper_bound(8) : " << nh_upper_bound(arr, 10, 8) << endl;
	cout << "nh_upper_bound(9) : " << nh_upper_bound(arr, 10, 9) << endl;
  
	return 0;
}
