//
//  main.c
//  hihocoder_002
//
//  Created by SHUYING on 12/19/15.
//  Copyright © 2015 SHUYING. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t;
    int i, j;
    int n,m;
    int max;
    int a[101] = {0};
    scanf("%d", &t);
    for ( i = 0; i < t; i++ )
    {
        max = 0;
        scanf("%d %d", &n,&m);
        for ( j = 1; j <= n; j++ )
        {
            scanf("%d", &a[j]);
        }
        if ( m >= n )
        {
            printf("100\n");
            continue;
        }
        for( j = m + 1; j <= n; j++ )
        {
            if ( max < a[j] - a[j-m-1] - 1 )
            {
                max = a[j] - a[j-m-1] - 1;
            }
        }
        printf("%d\n", max);
        
    }
    return 0;
}
