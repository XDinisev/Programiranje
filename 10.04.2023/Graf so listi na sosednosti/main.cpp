#include <bits/stdc++.h>

using namespace std;

vector<int> orientiran[100];
vector<int> neorientiran[100];


int main()
{
    int n;
    cin >> n;
    int a, b;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        orientiran[a].push_back(b);
        neorientiran[a].push_back(b);
        neorientiran[b].push_back(a);
    }
    return 0;
}
