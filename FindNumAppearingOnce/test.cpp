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
int main()
{
	Test1();
	return 0;
}