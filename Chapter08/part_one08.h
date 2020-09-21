#include<stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
}

void exampl_eight_five(){
    int a[6],s=0,*p;
    for(int i=0;i<6;i++){
        scanf("%d",a+i);
        s+=*(a+i);
    }

//    for(p=a;p<a+6;p++){
//        s+=*p;
//    }
    printf("%d\n",s);
}

//一维指针和一维数组之间的转化
//&a[i]<===>a+i  *(a+i)<===>a[i]

//二维指针和二维数组之间的转化
//a[i][j]<====> *(*(a+i)+j) &a[i][j]<====>*(a+i)+j
//a[i]<====>*(a+i)  &a[i]<====>a+i


