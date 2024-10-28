#include <stdio.h>
int main(){
    int item;
    int p=1;
    printf("Enter an item");
    scanf("%d", &item);
    if(item!=0){
        p=p*item;
    }
    printf("The product is %d",p);
}
