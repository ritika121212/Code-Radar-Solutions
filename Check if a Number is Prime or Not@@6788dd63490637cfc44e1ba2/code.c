#include <stdio.h>
int main() {
int n;
int flag=1;
scanf("%d",&n);
for(int i=2;i<n;i++){
    if(n%i == 0){
        flag=0;
    }
}
if(flag){
    printf("Prime");
}
else{
printf("Not Prime");
}
return 0;
}