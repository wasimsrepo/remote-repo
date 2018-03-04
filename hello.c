#include<stdio.h>
#define false -1
#define true 1
#define null 0
main(){
    if(null)
        printf("null");
    else if(false)
        printf("true");
    else
        printf("false");
        
    printf("New Line Added");
}
