//编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    cout<<"你总共经历了"<<age*12<<"个月"<<endl;
    return 0;
}