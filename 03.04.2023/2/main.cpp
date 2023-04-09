#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string ime, prezime;
    priority_queue<pair<int, string>> pq;

    int a, b, c;
    for(int i=0; i<n; i++)
    {
        cin >> ime >> prezime >> a >> b >> c;
        pq.push({4*a+2*b+c, ime + " " + prezime});
    }
    while(!pq.empty())
    {
        auto node=pq.top();
        pq.pop();
        a=node.first;
        ime=node.second;
        cout << ime << endl;

        if(a>=4)
            a-=4;
        else if(a>=2)
            a-=2;
        else
            a-=1;
        if(a!=0)
            pq.push({a, ime});
    }
    return 0;
}
