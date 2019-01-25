#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
ifstream fi ("GRAPH7.inp");
ofstream fo ("GRAPH7.out");
vector < vector <int> > a(1001);
long long n,i,x,j,dem[1001];
int main()
{
    fi >>n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            fi >>x;
            if (x==1)
            {
                a[i].push_back(j);
            }
        }
    }
    for (i=1;i<=n;i++)
    {
        cout <<a[i].size()<<" ";
        for (j=0;j<a[i].size();j++) cout <<a[i][j]<<" ";
        cout <<endl;
    }

    return 0;
}
