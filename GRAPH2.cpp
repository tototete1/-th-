#include <fstream>

using namespace std;
#define name "GRAPH2."
ifstream fi (name"inp");
ofstream fo (name"out");
long long n,m,i,u,v;
long long s[100001];
int main()
{
    fi >>n>>m;
    for (i=1;i<=m;i++)
    {
        fi >>u>>v;
        s[u]++,s[v]++;
    }
    for (i=1;i<=n;i++) fo <<s[i]<<" ";
    return 0;
}
