#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %D",&a,&b);
    printf("%u",a>>b);
    return 0;
}