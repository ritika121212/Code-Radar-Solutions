#include <stdio.h>
int main() {
char a;
scanf("%d",&a);
if((ch>='A')&&(ch>='Z'))
printf("Uppercase");
else if ((ch<='a')&&(ch<='z'))
printf("Lowercase");
else
printf("Not an character");


    return 0;
}