//1．编写一个C++程序，它显示您的姓名和地址。
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    string address;
    getline(cin,name);
    getline(cin,address);
    cout<<"姓名："<<name<<endl;
    cout<<"地址："<<address<<endl;
    return 0;
}