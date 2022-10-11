/* 3．编写一个C++程序，它使用3个用户定义的函数（包括main()），并生成下面的输出： */
#include<iostream>
#include<string>
using namespace std;
int function()
{
    cout<<"Three blind mice"<<endl;
    return 0;
}
void function(int flag)
{
    cout<<"See how then run"<<endl;
}
int main()
{
    int a=function();
    function(function());
    function(a);
    return 0;
}