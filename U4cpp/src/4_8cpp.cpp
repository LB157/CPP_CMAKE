
/* 8．完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼
的直径。 */

#include<iostream>
#include<string>
using namespace std;
struct pz{
    string name;
    float r;
    float w;
};
int main()
{
    pz *a=new pz();
    cin>>(*a).r;
    cin>>(*a).name;
    cin>>(*a).w;
    
    cout<<"公司名："<<(*a).name<<endl<<"饼直径："<<(*a).r<<endl<<"饼重量："<<(*a).w<<endl;
    return 0;

}