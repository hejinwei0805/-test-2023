#include<stdio.h>
#include<string.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);//����һ�����ָ�ֵ��n
//	int ret = 1;//���صĳ�ʼֵ��1��ʼ
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//����1��+....+10���Ľ׳�
//int main()
//{
//	int n = 0;
//	int ret = 1;//����ֵ
//	int sum = 0;//�ܺ�
//	int i = 0;
//	for (n = 1; n <= 10; n++)//����1��+....+10���Ľ׳�
//	{
//		ret = 1;//��ʼ��1
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

//�Ż�����
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

//���ֲ���(�۰����)   ��Ե�����������
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
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}










		//0-9
//	int k = 7;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//
//}


//���˻��
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
//		Sleep(1000);//˯�ߺ���
//		system("cls");//�����Ļ��Ϣ
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
//	int n = 0;//���������
//	scanf("%d", &n);//��������5
//	int i = 0;
//	int ret = 1;//��һ�η��ص�ֵ
//	for (i = 0, i < n, i++;)//ѭ��5��
//	{
//		ret = ret * i;//����һ�η���һ�Σ������ۼӣ�
//	}
//	printf("%d\n", &ret);
//	return 0;
//}