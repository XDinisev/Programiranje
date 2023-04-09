#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, string> m;

    string user, pass;

    for(int i=0; i<n; i++)
    {
        cin >> user >> pass;
        m[user]=pass;
    }

    while(cin >> user && user!="KRAJ" && cin >> pass)
    {
        if(m[user]==pass)
        {
            cout << "Najaven";
            break;
        }
        cout << "Nenajaven" << endl;
    }

    return 0;
}
