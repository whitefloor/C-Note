#include <stdio.h>

int FlowControl(int a, int b){
    if (a>b){
        printf("123");
    }else if (a==b){
        printf("456");
    }else{
        printf("789");
    }
    
    switch (a){
        case 1:
            printf("The number is 1");
        case 2:
            printf("The number is 2");
        case 3:
            printf("The number is 3");
        default :
            printf("The number is %d",a);
    }
    
    while (a+b<100){
        printf("a+b<100");
    }
    
    do {
        printf("do while");
    }while (a+b==100);
    
    for (int i =0;i<100;i++){
        if (i%2!=0){
            continue;
        }
        printf("%d",i);
        if (i == 99){
            break;
        }
    }
    
    if (a+b == 200){
        goto label;
    }
    
label:
    printf("here is goto");
    
    return 0;
}
