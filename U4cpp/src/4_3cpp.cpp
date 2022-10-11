/* 3．编写一个C++程 ,连接字符数组*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name1[20];
    char name2[20];
    char name3[]=", ";
    cin>>name1;
    cout<<"first name："<<name1<<endl;
    cin>>name2;
    cout<<"last name："<<name2<<endl;
    strcat(name1,name3);
    strcat(name1,name2);
    cout<<"全名："<<name1<<endl;
    return 0;
   }