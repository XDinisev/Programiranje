#include <bits/stdc++.h>

using namespace std;

vector<int> g[100];
int pocetok, kraj;
bool visited[100];


vector<int> dfs(int curr)
{
//    system("PAUSE");
    visited[curr]=1;
        vector<int> v;
    if(curr==kraj)
    {
        v.push_back(curr);
        return v;
    }
    for(auto i:g[curr])
    {
        if(!visited[i])
        {
//            cout << curr << " " << i << endl;
            auto v=dfs(i);
            if(v.size())
            {
//                cout << "STAVAM " << curr << endl;
                v.push_back(curr);
                return v;
            }
        }
    }
    return v;
}

int main()
{
    memset(visited, 0, sizeof(visited));
    int n;
    cin >> pocetok >> kraj;
    cin >> n;
    int a, b;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    auto pateka=dfs(pocetok);
    reverse(pateka.begin(), pateka.end());
    for(auto i:pateka)
        cout << i << " ";

    return 0;
}
