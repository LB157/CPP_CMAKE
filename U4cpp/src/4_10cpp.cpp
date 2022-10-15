//10.三次成绩求平均
#include<iostream>
#include<string>
#include<array>
using namespace std;
int main(){
    const int a=3;
    array<double,a>grade;
    cout<<"第一次成绩";
    cin>>grade[0];
    cout<<"第二次成绩";
    cin>>grade[1];
    cout<<"第三次成绩";
    cin>>grade[2];
    cout<<"次数为："<<a<<endl;
    cout<<"成绩为："<<grade[0]<<", "<<grade[1]<<", "<<grade[2]<<endl;
    float average=(grade[0]+grade[1]+grade[2])/3.0;
    cout<<"平均成绩为："<<average<<endl;
    return 0;

}