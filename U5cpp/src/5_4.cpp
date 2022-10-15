/* 4．Daphne以10%的单利投资了100美元。也就是说，每一年的利润都是投资额的10%，即每年10美元：利息 = 0.10×原始存款而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款
（包括获得的利息）的5%，：利息 = 0.05×当前存款Cleo在第一年投资100美元的盈利是5%—得到了105美元。下一年
的盈利是105美元的5%—即5.25美元，依此类推。请编写一个程序，计算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时
两个人的投资价值。*/
#include<iostream>
using namespace std;
struct deposit
{
    long double invest;
    long double interest;
    long double sum;
    /* data */
};

int main()
{
    deposit daphone,cleo;
    daphone.invest=100;
    cleo.invest=100;
    daphone.sum=daphone.invest;
    cleo.sum=cleo.invest;
    int year=0;
    while(daphone.sum>=cleo.sum)
    {   
        
        daphone.sum+= 10;
        cleo.sum+=cleo.sum*0.05;      
        year++;  
  }
    cout<<year<<"年"<<"daphne投资价值"<<daphne.sum<<endl;
    cout<<year<<"年"<<"cleo投资价值"<<cleo.sum<<endl;
    return 0;

}  

