#include <fstream>

using namespace std;
ifstream fi ("GRAPH6.inp");
ofstream fo ("GRAPH6.out");
long long n,m,i,j,u,v;
int a[1001][1001];
int main()
{
    fi >>n>>m;
    for (i=1;i<=m;i++)
    {
        fi >>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
    fo <<n<<endl;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++) fo <<a[i][j]<<" ";
        fo <<endl;
    }
    return 0;
}
