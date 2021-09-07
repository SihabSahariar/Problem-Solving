 #include<cstdio>
 #include<vector>
 using namespace std;
 typedef long long LL;
 struct Edge
 {
     LL to,next;
 }edge[100001];
 LL first1[50010],num_edge;
LL ans[50001][501];
LL ans1,ans2,n,k2;
bool vis[50001];
void dfs(LL u)
{
LL k=first1[u],i,j;
vector<LL> temp;
ans[u][0]=1;
    vis[u]=true;
while(k!=0)
    {
LL &v=edge[k].to;
       if(!vis[v])
        {
dfs(v);
            for(i=1;i<=k2;i++)
               ans[u][i]+=ans[v][i-1];
temp.push_back(v);
        }
        k=edge[k].next;
   }
    ans2+=ans[u][k2];
   for(i=0;i<temp.size();i++)
for(j=0;j<=k2-2;j++)
     ans1+=ans[temp[i]][j]*(ans[u][k2-j-1]-ans[temp[i]][k2-j-2]);
}
int main()
{
   LL i,a,b;
   scanf("%I64d%I64d",&n,&k2); for(i=1;i<n;i++)
    {
scanf("%I64d%I64d",&a,&b);
        edge[++num_edge].to=b;
       edge[num_edge].next=first1[a];
      first1[a]=num_edge;
        edge[++num_edge].to=a;
       edge[num_edge].next=first1[b];
first1[b]=num_edge;
 }
dfs(1);
printf("%I64d",ans2+ans1/2);
return 0;
}