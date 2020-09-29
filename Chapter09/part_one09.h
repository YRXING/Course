#include<stdio.h>
#include<math.h>
#define N 3
struct comp{
    double x,y;
    double m;
}a;

double compare(struct comp a,struct comp b){
    a.m=sqrt(a.x*a.x+a.y*a.y);
    b.m=sqrt(b.x*b.x+b.y*b.y);
    return a.m-b.m;
}

struct comp add(struct comp a,struct comp b){
    struct comp c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}

struct comp prod(struct comp a,struct comp b){
    struct comp c;
    c.x=a.x*b.x-a.y*b.y;
    c.y=a.x*b.y+b.x*a.y;
    return c;
}

void printComp(struct comp a){
    printf("%f%+fi",a.x,a.y);
}

void compSort(){
    struct comp a[N],temp;
    for(int i=0;i<N;i++){
        scanf("%lf%lf",&a[i].x,&a[i].y);
        a[i].m=sqrt(a[i].x*a[i].x+a[i].y*a[i].y);
    }
    
    //排序
    int k;
    for(int i=0;i<N-1;i++){
        minIndex=i;//记录最小值下标
        //此循环是寻找最值下标
        for(int j=i+1;j<N;j++){
            if(a[minIndex].m>a[j].m) minIndex=j;
        }
        //最值和头部交换
        temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
    
    //输出
    for(int i=0;i<N;i++)
        printf("%.1f%+.1fi",a[i].x,a[i].y);
}


