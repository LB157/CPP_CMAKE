#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //指针地址与整形数值的地址是否共用
    int date01=6;
    int *date02;
    date02=&date01;
    *date02=*date02+1;
     cout<<"date01值："<<date01<<endl;
     cout<<"date02值："<<*date02<<endl;
    return 0;
}
