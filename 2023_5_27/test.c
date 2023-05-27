//#include <stdio.h>
//
//
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;//保留上次的数据，不销毁（记住它的特性）
//    c += 1;//c=0+1=1(第一次)
//    b += 2;//b=3+2=5(第一次)
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

//OJ题目:
//1.IO型
//自己写全部代码main函数，输入，实现，输出
//2.接口型
//填空


//已知一个函数y = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
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

//给定秒数 seconds ，把秒转化成小时、分钟和秒。
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


//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//#include <stdio.h>
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int i = 0;
//    float avg = 0.0f;//小数点
//
//    for (i = 0; i < 5; i++)
//    {
//
//        scanf("%d", &score);
//        sum += score;
//
//    }
//    avg = sum / 5.0;
//    printf("%.1f\n", avg);//.1指的是输出小数点后1位
//    return 0;
//}

//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
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

//学生信息管理系统是学校教学管理的重要工具，现有一名学生基本信息如下：姓名 - Jack，年龄 - 18，性别 - Man，请按照输出样例的格式输出该学生的信息
//输出分为三行，分别为标题行，分隔行，信息行。
//第一行，标题行，每个标题之间间隔4个空格。
//第二行，分隔行，一共21个减号"-"。
//第三行，信息行，每列输出信息和标题首字母对齐。输出样例如下：
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


//将一个四位数，反向输出
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);//1234
//    while (n)//依次打印
//    {
//        printf("%d", n % 10);
//        n = n / 10;
//    }
//    return 0;
//}