#include <fstream>

using namespace std;
#define name "GRAPH1."
ifstream fi (name"inp");
ofstream fo (name"out");
long long n,i,j,s;
int a[1001][1001];
int main()
{
    fi >>n;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++) fi >>a[i][j];
    for (i=1;i<=n;i++)
    {
        s=0;
        for (j=1;j<=n;j++) s+=a[i][j];
        fo <<s<<" ";
    }
    return 0;
}
