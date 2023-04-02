#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=s.size();

    map<string, int> m;
    string best, curr;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n-i+1; j++)
        {
//            cout << j << i << endl;
            curr=s.substr(j, i);
            m[curr]++;
            if(m[curr]>=m[best])
            {
                if(curr.size()>best.size())
                    best=curr;
                if(m[curr]>m[best])
                    best=curr;
            }
        }
    }
    cout << best;

    return 0;
}
