#include <stdio.h>
#include <math.h>
#include <string.h>

#define maxInt ((1<<30)-1)
#define minInt (-(1<<30))

void example_six_one(){
    double score[10];
    int i=0;
    double sum=0;
    
    for(i=0;i<10;i++){   //数组初始化
        scanf("%lf",&score[i]);
        sum+=score[i];
    }
    double aver = sum/10;
    printf("average:%.2f\n",sum/10);
    
    int high=0,low=0;
    for(i=0;i<10;i++){
        if(score[i]>aver) high++;
        else low++;
    }
    printf("high:%d\n",high);
    printf("low:%d\n",low);
}

void example_six_tow(){
    int fib[20]={1,1};
    int i;
    for(i=2;i<20;i++)
        fib[i]=fib[i-1]+fib[i-2];
    
    for(i=0;i<20;i++){
        if(i%5==0) printf("\n");
        printf("%6d",fib[i]);
    }
}

void practice_six_one(){
    int num[10];

    scanf("%d",&num[0]);
    int i,min,max;
    double sum=num[0];
    min=max=num[0];
    
    for(i=1;i<10;i++){
        scanf("%d",&num[i]);
        sum+=num[i];
        if(num[i]>max) max=num[i];
        else if(num[i]<min) min=num[i];
    }
    
    double aver = sum/10;
    printf("max-min:%d\naver:%.2f\n",max-min,aver);
    
    double sub=maxInt; //存放最小差值，用于比较
    int k=-1; //存放最小差值下标，用于输出最小差值的数；
    for(i=0;i<10;i++){
        double value = fabs(num[i]-aver);
        if(value<sub) {
            sub=value;
            k=i;
        }
    }
    
    printf("sub:%.2f\nindex:%d\ndata:%d\n",sub,k,num[k]);
    
}

#define N 20
void practice_six_two(){
    int arr[N];
    int len;
    scanf("%d",&len);
    int i,min=maxInt,index=-1;
    
    //找最小值
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<=min){
            min=arr[i];
            index=i;
        }
    }
    
    //交换
    int temp = arr[0];
    arr[0]=arr[index];
    arr[index]=temp;
    
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);
    putchar('\n');
}


