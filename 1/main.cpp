#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> izraz;

    char c;

    int a, b;

    while(cin >> c && c!='=')
    {
        if(c=='+' || c=='-' || c=='*')
        {
            a=izraz.top();
            izraz.pop();
            b=izraz.top();
            izraz.pop();
            cout << a << " " << c << " " << b << endl;
            if(c=='+')
                izraz.push(a+b);
            else if(c=='-')
                izraz.push(a-b);
            else if(c=='*')
                izraz.push(a*b);
        }
        else
            izraz.push(c-'0');
    }

    cout << izraz.top();

    return 0;
}
