/* 5．编写一个程序，结构体 */

#include<iostream>
using namespace std;
struct CandyBar
{
    string band;
    float weight;
    int kloli;
    /* data */
};


int main()
{
    CandyBar snack;
    snack.band="Mocha Munch";
    snack.kloli=2.3;
    snack.weight=350;
    cout<<"品牌"<<snack.band<<"卡路里："<<snack.kloli<<"重量："<<snack.weight<<endl;
    return 0;
}