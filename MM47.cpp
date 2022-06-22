// Counting Bus Fare
#include <iostream>
using namespace std;

int main()
{
    int total;
    int num_ad, num_ch, num_sen; // ad為成人, ad為小孩, ad為老人
    int fare_ad, fare_ch, fare_sen;
    cin >> num_ad >> fare_ad >> num_ch >> fare_ch >> num_sen >> fare_sen;
    total = (num_ad * fare_ad) + (num_ch * fare_ch) + (num_sen * fare_sen);
    cout << total << "\n";
    return 0;
}