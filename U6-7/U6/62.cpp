// U6.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
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
        cout << "������" << endl;
    }
    else
    {
        cout << "ƽ��ֵ��" << average;
        cout << "��������" << i;
        cout << " ��ֵ������������  " << count << endl;
    }

    return 0;
}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�

