#include <bits/stdc++.h>
#define name "GRAPH4."
using namespace std;
ifstream fi (name"inp");
ofstream fo (name"out");
long long n,m,q,i,j,u,v,x,y;
long long dau[100001],cuoi[100001];
int main()
{
    fi >>n>>m>>q;
    for (i=1;i<=m;i++)
    {
        fi >>dau[i]>>cuoi[i];
        if (dau[i]>cuoi[i]) swap(dau[i],cuoi[i]);
    }
    for (i=1;i<=q;i++)
    {
        fi >>u>>v;
        if (u>v) swap(u,v);
        for (j=1;j<=m;j++)
            {
                if (dau[j]==u && cuoi[j]==v)
                {
                    fo <<"YES"<<endl;
                    break;
                }
            }
        if (j>m) fo <<"NO"<<endl;
    }
    return 0;
}
