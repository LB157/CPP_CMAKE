
/* 6．结构CandyBar包含3个成员，如编程练习5所示。请编写一个程序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择
的值，然后显示每个结构的内容。 */
#include<iostream>
#include<string>
using namespace std;
struct CandyBar{
    string band;
    float weight;
    int kloli;
    /* data */
};
int main()
{   
    CandyBar b[3]={{"a",1,11},{"b",2,22},{"c",3,33}};
    CandyBar *a;
    a = b;
    cout<<a->band<<a->weight<<a->kloli<<endl;
    a++;
    cout<<a->band<<a->weight<<a->kloli<<endl;
    a++;
    cout<<a->band<<a->weight<<a->kloli<<endl;

    return 0;
}