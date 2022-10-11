/* 3．编写一个C++程 ,连接字符数组string*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string name1;
    string name2;
    string name3=", ";
    cin>>name1;
    cout<<"first name："<<name1<<endl;
    cin>>name2;
    cout<<"last name："<<name2<<endl;
    name1+=name3;
    name1+=name2;
    cout<<"全名："<<name1<<endl;
    return 0;
   }