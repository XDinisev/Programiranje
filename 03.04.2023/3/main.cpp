#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int h1, m1, h2, m2;

    set<pair<int, bool>> s;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> h1 >> m1 >> h2 >> m2;
        s.insert({h1*60+m1, 0});
        s.insert({h2*60+m2, 1});
    }
    int momentalno=0;
    int maks=0;

    for(auto i:s)
    {
        if(i.second==0)
            momentalno++;
        else
            momentalno--;
        maks=max(maks, momentalno);
    }
    cout << maks;


    return 0;
}
