#include<stdio.h>

void practice_six_five(int len,int a[]){
    int x;
    scanf("%d",&x);
    //寻找插入位置
    int i;
    for(i=0;i<len;i++){
        if(a[i]>x) break;
        else continue;
    }
    //从插入位置开始整体右移一位
    for(int k=len-1;k>=i;k--){
        a[k+1]=a[k];
    }
    a[i]=x;
    
    //输出
    for(i=0;i<len+1;i++)
        printf("%d ",a[i]);
    putchar('\n');
}

void print_mtx(int a[][3],int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        //输出一行完毕后，换行
        putchar('\n');
    }
}

void mtx_add(int a[][3],int b[][3],int row){
    for(int i=0;i<row;i++)
        for(int j=0;j<3;j++){
            a[i][j]+=b[i][j];
        }

    //输出
    printf("mtx add:\n");
    print_mtx(a, row);
}

void mtx_sub(int a[][3],int b[][3],int row){
    for(int i=0;i<row;i++)
        for(int j=0;j<3;j++){
            a[i][j]-=b[i][j];
        }
    
    //输出
    printf("mtx sub:\n");
    print_mtx(a, row);
}
void mtx_multi(int a[][3],int b[][3],int row){
    int c[3][3]={};
    for(int i=0;i<row;i++)
        for(int j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++)
                sum+=a[i][k]*b[k][j];
            //a[i][j]=sum;
            c[i][j]=sum;
        }
    
    //输出
    printf("mtx multi\n");
    print_mtx(c, row);
}

void verify_mtx(){
    int a[3][3]={1,1,1,2,2,2,3,3,3};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    printf("mtx a:\n");
    print_mtx(a, 3);
    printf("mtx b:\n");
    print_mtx(b, 3);
    mtx_add(a, b, 3);
    mtx_sub(a, b, 3);
    mtx_multi(a, b, 3);
}
