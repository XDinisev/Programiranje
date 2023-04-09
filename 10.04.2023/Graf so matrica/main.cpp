#include <iostream>

using namespace std;

bool orientiran[100][100];
bool neorientiran[100][100];

int main()
{
    int n;
    cin >> n;

    int a, b;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b; // Rebro od a do b
        orientiran[a][b]=1;     // Striktno od a kon b
        neorientiran[a][b]=1;
        neorientiran[b][a]=1;   // Moze da se odi i vo obratnata nasoka
    }

    return 0;
}
