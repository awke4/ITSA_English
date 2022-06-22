// Marathon
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//sort by pair's second value
bool cmp(const pair<string, string> &p1, const pair<string, string> &p2)
{
    return p1.second < p2.second;
}

int main()
{
    vector<pair<string, string>> id_score;
    string id, score;
    while (cin >> id && id != "EOF")
    {
        cin >> score;
        id_score.push_back(make_pair(id, score));
    }
    sort(id_score.begin(), id_score.end(), cmp);
    
    for (auto i = id_score.begin(); i < id_score.begin() + 3; i++)
        cout << i->first << ' ' << i->second<< "\n";
    return 0;
}