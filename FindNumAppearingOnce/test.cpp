#include <iostream>
using namespace std;

//如果一组数中其他数都是成对出现，只有一个数只出现一次，找出这个数
void Test1()
{
	int arr[] = { 1,1,2,3,3,4,4 };
	int ret = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		ret ^= arr[i];
	}
	cout << ret << endl;
}
int main()
{
	Test1();
	return 0;
}