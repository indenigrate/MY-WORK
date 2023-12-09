/*
 * https://codeforces.com/problemset/problem/237/A
 */
#include <stdio.h>



void main()
{
    int n;
    scanf("%d",&n);
    int h[n],m[n];

    for(int _=0;_<n;_++){
        scanf(" %d %d",&h[_],&m[_]);
    }
    int cache=1,maxcache=1;

    for(int _=0;_<n;_++){
        if(h[_]==h[_+1]&&m[_]==m[_+1]){
            cache++;
        }
        else{
            maxcache=maxcache>=cache?maxcache:cache;
            cache=1;
        }
    }
    printf("%d\n",maxcache);
}