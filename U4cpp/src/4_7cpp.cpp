/* 7．William Wingate从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
披萨饼公司的名称，可以有多个单词组成。披萨饼的直径披萨饼的重量请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用
cin（或它的方法）和cout。
 */

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
    pz a;
    cin>>a.name;
    cin>>a.r;
    cin>>a.w;
    cout<<"公司名："<<a.name<<endl<<"饼直径："<<a.r<<endl<<"饼重量："<<a.w<<endl;
    return 0;

}