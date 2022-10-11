/* 2．编写一个C++程序，它要求用户输入一个以long为单位的距离，
然后将它转换为码（一long等于220码）。 */
// 多行注释：shift+ALT+A
// 单行注释：CTRL+/
#include<iostream>
#include<string>
using namespace std;
void main()
{
    int num;
    cin>>num;
    cout<<"距离为："<<num*220<<endl;
}