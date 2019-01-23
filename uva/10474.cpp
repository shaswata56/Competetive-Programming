#include <stdio.h>
int main() {
    int n, m, t = 0, a;
    while(scanf("%d %d", &n, &m) == 2)
        {
        if(!n && !m)
            break;
        int arr[10001] = {}, chk[10001], lr = 0, i;
        while(n--)
        {
            scanf("%d", &a);
            arr[a]++;
            if(a > lr)
            lr = a;
        }
        chk[0] = 0;
        i = 1;
        while(i <= lr)
        {
            chk[i] = chk[i-1]+arr[i-1];
            i++;
        }
        printf("CASE# %d:\n", ++t);
        while(m--) {
            scanf("%d", &a);
            if(!arr[a])
                printf("%d not found\n", a);
            else {
                printf("%d found at %d\n", a, chk[a]+1);
            }
        }
    }
    return 0;
}
