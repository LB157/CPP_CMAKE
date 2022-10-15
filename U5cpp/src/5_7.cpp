/* 7．设计一个名为car的结构，用它存储下述有关汽车的信息：生产商（存储在字符数组或string对象中的字符串）、生产年份（整数）。
编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建一个由相应数量的car结构组成的动态数组。接下来，程序提示用户输
入每辆车的生产商（可能由多个单词组成）和年份信息。请注意，这需要特别小心，因为它将交替读取数值和字符串（参见第4章）。最后，
程序将显示每个结构的内容。该程序的运行情况如下：*/
#include<iostream>
#include<string>
using namespace std;
struct car{
    string name;
    int year;

};

int main(){
    int num=0;
    cout<<"车辆数量：";
    cin>>num;
    car *a=new car[num];
    for(int i=0; i<num;i++){
        cout<<"车号："<<i+1<<endl;
        cout<<"车名：";
        cin>>a->name;
        cout<<"车年份：";
        cin>>a->year;

    }
    for(int i=0;i<num;i++)
        cout<<"车年份："<<*(P+i).year<<"车名："<<*(P+i).name<<endl;
        return 0;

}

