/* 7．编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量—每加
仑多少英里。注意，除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等
于3.875升。因此，19mpg大约合12.4l/100km，l27mpg大约合8.71/100km。
 */

#include<iostream>
using namespace std;
int main()
{
    double ml;
    cout<<"100km耗油量：";
    cin>>ml;
    cout<<ml<<" L/100Km = "<<62.14*3.785/ml<<" mpg\n";
    return 0;
}