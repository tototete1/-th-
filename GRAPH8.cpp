#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
ifstream fi ("GRAPH8.inp");
vector < vector <int> > ke(1001);
long long n,m,q,u,i,j,v;
int main()
{
    fi >>n>>m>>q;
    for (i=1;i<=m;i++)
    {
        fi >>u>>v;
        ke[u].push_back(v);
    }
    for (i=1;i<=q;i++)
    {
        fi >>u>>v;
        for (j=0;j<ke[u].size();j++) if (ke[u][j]==v) break;
        if (j>=ke[u].size()) cout <<"NO"<<endl;
        else cout <<"YES"<<endl;
    }
    return 0;
}
