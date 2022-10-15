//1．编写一个C++程序，它显示您的姓名和地址。
#include<iostream>
#include<string>
using namespace std;
struct CandyBar{
    string brand;
    float weight;
    int calories;
};
int main()
{   CandyBar *a=new CandyBar[3];
    CandyBar a[3]={{"a",1,11},{"b",2,22},{"c",3,}};
    cout<<a[0].brand<<a[0].weight<<a[0].calories<<endl;
    cout<<a[1].brand<<a[1].weight<<a[1].calories<<endl;
    cout<<a[2].brand<<a[2].weight<<a[2].calories<<endl;
    return 0;
}