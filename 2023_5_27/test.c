//#include <stdio.h>
//
//
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;//�����ϴε����ݣ������٣���ס�������ԣ�
//    c += 1;//c=0+1=1(��һ��)
//    b += 2;//b=3+2=5(��һ��)
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}

//OJ��Ŀ:
//1.IO��
//�Լ�дȫ������main���������룬ʵ�֣����
//2.�ӿ���
//���


//��֪һ������y = f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//	printf("%d", y);
//	return 0;
//
//
//}

//�������� seconds ������ת����Сʱ�����Ӻ��롣
//#include<stdio.h>
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int s = 0;
//    int seconds = 0;
//
//    scanf("%d", &seconds);
//
//    h = seconds / 3600;
//    m = (seconds % 3600 / 60);
//    s = (seconds % 3600 % 60);
//
//    printf("%d %d %d", h, m, s);
//    return 0;
//
//}


//�Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС������
//#include <stdio.h>
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int i = 0;
//    float avg = 0.0f;//С����
//
//    for (i = 0; i < 5; i++)
//    {
//
//        scanf("%d", &score);
//        sum += score;
//
//    }
//    avg = sum / 5.0;
//    printf("%.1f\n", avg);//.1ָ�������С�����1λ
//    return 0;
//}

//�Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС������
//#include <stdio.h>
//
//int main()
//{
//    int date[5] = {0};
//    int sum = 0;
//    int i = 0;
//    float avg = 0.0f;
//
//    for (i = 0; i < 5; i++)
//    {
//
//        scanf("%d", &date[i]);
//        
//        }
//
//    for (i = 0; i < 5; i++)
//    {
//        sum += date[i];
//    }
//
//    avg = sum / 5.0;
//    printf("%.1f\n", avg);
//    return 0;
//}

//ѧ����Ϣ����ϵͳ��ѧУ��ѧ�������Ҫ���ߣ�����һ��ѧ��������Ϣ���£����� - Jack������ - 18���Ա� - Man���밴����������ĸ�ʽ�����ѧ������Ϣ
//�����Ϊ���У��ֱ�Ϊ�����У��ָ��У���Ϣ�С�
//��һ�У������У�ÿ������֮����4���ո�
//�ڶ��У��ָ��У�һ��21������"-"��
//�����У���Ϣ�У�ÿ�������Ϣ�ͱ�������ĸ���롣����������£�
//Name Age Gender
//-------------------- -
//Jack 18 man
//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//    return 0;
//}


//��һ����λ�����������
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);//1234
//    while (n)//���δ�ӡ
//    {
//        printf("%d", n % 10);
//        n = n / 10;
//    }
//    return 0;
//}