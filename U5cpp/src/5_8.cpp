/* 8.编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。随后，该程序指出用户输入了多少个单词
（不包括done在内）。下面是该程序的运行情况： */
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int count=0;
    char word[100];
    cout<<"Enter words (to stop, type the word done):"<<endl;
    while(strcmp(word, "done") != 0){
        count++;
        cout<<"字符不一致"；
        cin>>word;
    }
    cout << endl << "输错 " << count << "次" << endl;
    return 0;
}