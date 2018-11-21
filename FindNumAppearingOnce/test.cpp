#include <iostream>
using namespace std;

//���һ���������������ǳɶԳ��֣�ֻ��һ����ֻ����һ�Σ��ҳ������
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
//���һ���������������ǳ������Σ�ֻ��һ����ֻ����һ�Σ��ҳ������
void Test2()
{
	int arr[] = { 1,1,2,4,1,3,3,3,4,4 };
	int ret = 0;
	int bitSum[32] = { 0 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		int bitMask = 1;
		for (int j = 31; j >= 0; --j)
		{
			int bit = arr[i] & bitMask;
			if (bit != 0)
			{
				bitSum[j] += 1;
			}
			bitMask <<= 1;
		}
	}
	for (int i = 0; i < 32; ++i)
	{
		ret <<= 1;
		ret += bitSum[i] % 3;
	}
	cout << ret << endl;
}
int main()
{
	//Test1();
	Test2();
	return 0;
}