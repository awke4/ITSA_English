//求銷售員在銷售方面的相關資料
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int id, unit; // unit為銷售的單位量
    float cost;   //總銷售額
    cin >> id >> unit >> cost;
    cout << id << ' ' << unit << ' ' << fixed << setprecision(2) << cost << ' ';
    float sell, pay;
    sell = unit * cost;
    cout << fixed << setprecision(2) << sell << ' ';
    pay = sell * 0.12; //佣金為銷售額的12%
    cout << fixed << setprecision(2) << pay << "\n";
    return 0;
}