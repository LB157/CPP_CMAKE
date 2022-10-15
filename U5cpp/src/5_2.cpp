/* 2．使用array对象（而不是数组）和long double（而不是long long）
重新编写程序清单5.4，并计算100!的值。 */
#include<iostream>
#include<array>
using namespace std;
int main()
{
    int i;
    array<long double,120> a;
    a[0]=1;
    for(i=1;i<=100;i++)
    {
        a[i]=i*a[i-1];
    }
    cout<<100<<"!="<<a[100]<<endl;
    return 0;

}