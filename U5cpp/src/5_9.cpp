/*9.编写一个满足前一个练习中描述的程序，但使用string对象而不
是字符数组。请在程序中包含头文件string，并使用关系运算符来进行
比较测试。*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "输入字符“done”" << endl;
    int num = 0;
    string word;
    while (word != "done")
    {
        num++;
        cin >> word;
    }
    cout << "输错 " << num << "次" << endl;
    return 0;
}