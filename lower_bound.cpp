#include <iostream>
#include <algorithm>
using namespace std;
//arr[mid - 1] < num && arr[mid] >= num

int nh_lower_bound(int *arr, int len, int num)
{
	int start = 0;
	int end = len;

	while (end - start > 0)
	{
		int mid = (start + end) / 2;
		if (arr[mid] < num)
			start = mid + 1;
		else
			end = mid;
	}
	return end;
}

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 8, 9 };
	//시작은 0입니다.
	
	cout << "lower_bound(3) : " << lower_bound(arr, arr + 10, 3) - arr << endl;
	cout << "lower_bound(4) : " << lower_bound(arr, arr + 10, 4) - arr << endl;
	cout << "lower_bound(8) : " << lower_bound(arr, arr + 10, 8) - arr<< endl;
	cout << "lower_bound(9) : " << lower_bound(arr, arr + 10, 9) - arr<< endl;
	cout << "==================================================="<< endl;
	cout << "nh_lower_bound(3) : " << nh_lower_bound(arr, 10, 3) << endl;
	cout << "nh_lower_bound(4) : " << nh_lower_bound(arr, 10, 4) << endl;
	cout << "nh_lower_bound(8) : " << nh_lower_bound(arr, 10, 8) << endl;
	cout << "nh_lower_bound(9) : " << nh_lower_bound(arr, 10, 9) << endl;
  
	return 0;
}
