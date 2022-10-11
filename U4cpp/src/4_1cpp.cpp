//1．编写一个程序，如下输出示例，请求并显示信息。
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name1;
    string name2;
    string address;
    char grade;
    int age;
    getline(cin,name1);
    cout<<"first name："<<name1<<endl;
    getline(cin,name2);
    cout<<"last name："<<name2<<endl;
    cin.get(grade);
    cout<<"Grade："<<grade<<endl;
    (cin>>age).get();
    cout<<"age："<<age<<endl;
    return 0;
}