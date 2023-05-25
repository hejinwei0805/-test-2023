#include<stdio.h>
#include<string.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);//输入一个数字赋值给n
//	int ret = 1;//返回的初始值从1开始
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//计算1！+....+10！的阶乘
//int main()
//{
//	int n = 0;
//	int ret = 1;//返回值
//	int sum = 0;//总和
//	int i = 0;
//	for (n = 1; n <= 10; n++)//计算1！+....+10！的阶乘
//	{
//		ret = 1;//初始化1
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//优化代码
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	for (n = 1; n <= 10; n++)
//	{
//	
//			ret = ret * n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//二分查找(折半查找)   针对的是有序数组
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
////              4*10          4       =10
//	int k = 17;
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}










		//0-9
//	int k = 7;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//
//}


//两端汇聚
//int main()
//{
//	char arr1[] = "hello bit!!!!!!!";
//	char arr2[] = "################";
//	//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数
//		system("cls");//清空屏幕信息
//		left++;
//		right--;
//
//	}
//
//	return 0;
//
//}





//int main()
//{
//	int n = 0;//输入的数字
//	scanf("%d", &n);//比如输入5
//	int i = 0;
//	int ret = 1;//第一次返回的值
//	for (i = 0, i < n, i++;)//循环5次
//	{
//		ret = ret * i;//计算一次返回一次（进行累加）
//	}
//	printf("%d\n", &ret);
//	return 0;
//}