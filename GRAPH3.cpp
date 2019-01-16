#include <fstream>

using namespace std;
#define name "GRAPH3."
ifstream fi (name"inp");
ofstream fo (name"out");
long long n,q,i,u,v,j;
long long a[1001][1001];
int main()
{
    fi >>n>>q;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++) fi >>a[i][j];
    for (i=1;i<=q;i++)
    {
        fi >>u>>v;
        if (a[u][v]==1) fo <<"YES"<<endl;
        else fo <<"NO"<<endl;
    }
    return 0;
}
