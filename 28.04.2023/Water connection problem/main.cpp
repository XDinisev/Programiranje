#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> g[100];
bool in[100]={0};

void dfs(int node, int mind=9999)
{
    if(g[node].size())
        dfs(g[node][0].first, min(mind, g[node][0].second));
    else
        cout << node << " " << mind << endl;
}

int main()
{
    int n, p;
    cin >> n >> p;

    int a, b, d;
    for(int i=0; i<p; i++)
    {
        cin >> a >> b >> d;
        g[a].push_back({b, d});
        in[b]=1;
    }

    for(int i=1; i<=n; i++)
    {
        if(!in[i])
        {
            cout << i << " ";
            dfs(i);
        }
    }

    return 0;
}
