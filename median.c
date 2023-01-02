#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    int M,t=0;
    printf("Input 5 numbers\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a>b){
        t++;
    }
    if(a>c){
        t++;
    }
    if(a>d){
        t++;
    }
    if(a>e){
        t++;
    }
    if(t==2){
        M=a;
    }
    t=0;
    if(b>a){
        t++;
    }
    if(b>c){
        t++;
    }
    if(b>d){
        t++;
    }
    if(b>e){
        t++;
    }
    if(t==2){
        M=b;
    }
    t=0;
    if(c>a){
        t++;
    }
    if(c>b){
        t++;
    }
    if(c>d){
        t++;
    }
    if(c>e){
        t++;
    }
    if(t==2){
        M=c;
    }
    t=0;
    if(d>a){
        t++;
    }
    if(d>b){
        t++;
    }
    if(d>c){
        t++;
    }
    if(d>e){
        t++;
    }
    if(t==2){
        M=d;
    }
    t=0;
    if(e>a){
        t++;
    }
    if(e>b){
        t++;
    }
    if(e>c){
        t++;
    }
    if(e>d){
        t++;
    }
    if(t==2){
        M=e;
    }
    printf("%d\n", M);
    return 0;

}
