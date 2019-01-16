#include <fstream>

using namespace std;
ifstream fi ("GRAPH5.inp");
ofstream fo ("GRAPH5.out");
long long n,m,i,j;
long long a[1001][1001],cuoi[100001],dau[100001];
int main()
{
    fi >>n;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            fi >>a[i][j];
            if (a[i][j]==1 && a[j][i]==0)
            {
                m++;
                dau[m]=i;
                cuoi[m]=j;
            }
        }
    }
    fo <<n<<" "<<m<<endl;
    for (i=1;i<=m;i++) fo <<dau[i]<<" "<<cuoi[i]<<endl;
    return 0;
}
