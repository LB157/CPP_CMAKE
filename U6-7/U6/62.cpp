// U6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <array>
using namespace std;
int main()
{
    int i = 0, j = 0;
    unsigned int count = 0;
    const int size = 10;
    array<double, size> matrix;
    double sum = 0.0, average = 0.0;

    while (i < size && cin >> matrix[i])
    {
        
            cout << "matrix " << i+1<<":"<< matrix[i]<<endl;
            ++i;
    }

    for (j = 0; j < i; j++)
    {
        sum += matrix[j];
    }
    average = sum / i;
    for (j = 0; j < i; j++)
    {
        if (average < matrix[j])
        {
            ++count;
        }
    }

    if (0 == i)
    {
        cout << "无数字" << endl;
    }
    else
    {
        cout << "平均值：" << average;
        cout << "数字数量" << i;
        cout << " 均值以下数字数量  " << count << endl;
    }

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

