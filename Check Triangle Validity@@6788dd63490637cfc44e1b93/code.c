#include <stdio.h>
int main()[
    int a,b,c;
    scanf("%d\n %d\n %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
    
]

