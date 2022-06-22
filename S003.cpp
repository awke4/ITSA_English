//One on one
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> enemies, soilders;
    int num_people;
    cin >> num_people;
    while (num_people != 0)
    {
        enemies.resize(num_people);
        soilders.resize(num_people);
        for (int i = 0; i < num_people; i++)
            cin >> enemies[i];
        for (int i = 0; i < num_people; i++)
            cin >> soilders[i];

        sort(enemies.begin(), enemies.end());
        sort(soilders.begin(), soilders.end());

        int winNumer=0;
        auto e = enemies.begin();
        auto s = soilders.begin();
        //依照排序好的vector進行比對
        while (e != enemies.end() && s != soilders.end() )
        {
            if(*e >= *s)
                s++;
            else if(*e < *s)
            {
                winNumer++;
                e++;
                s++;
            }
        }
        cout << winNumer << "\n";
        cin >> num_people;
    }
    return 0;
}