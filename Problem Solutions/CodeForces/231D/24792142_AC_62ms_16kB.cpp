#include <cstdio>
int a[7];

int main()
{
    int x, y, z, x1, y1, z1;
    scanf("%d %d %d %d %d %d", &x, &y, &z, &x1, &y1, &z1);
    for(int i = 1; i <= 6; i++)
        scanf("%d", &a[i]);
    int ans = 0;
    if(y < 0)
        ans += a[1];
    if(y - y1 > 0)
        ans += a[2];
    if(z < 0)
        ans += a[3];
    if(z - z1 > 0)
        ans += a[4];
    if(x < 0)
        ans += a[5];
    if(x - x1 > 0)
        ans += a[6];
    printf("%d\n", ans);
}