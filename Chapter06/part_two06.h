#include<stdio.h>

//查找操作核心思想
//for(int i=0;i<len;i++){
//    if(arr[i]==x){
//        //符合条件后的操作
//        break;
//    }
//}


#define N 5
void example_six_four(){
    int a[N],i,x,flag;
    printf("input %d number:\n",N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("input x to look for:\n");
    scanf("%d",&x);
    
//    flag=0;
//
//    //顺序查找核心思想
//    for(i=0;i<N;i++)
//        if(a[i]==x){
//            printf("find:%d it is a[%d]\n",x,i);
//            flag=1;
//            break;
//        }
////        if(a[i]==x){
////            printf("find:%d it is a[%d]",x,i);
////            flag=1;
////            break;//break加与不加
////        }else flag=0;
//
//    if(flag==0)
//        printf("%d not been found.\n",x);
//    return;
    
    int top=0,mid,bot=N-1;
    while(top<=bot){
        mid = (top+bot)/2;
        if(a[mid]>x){
            bot = mid - 1;
        }else if(a[mid]<x){
            top = mid +1;
        }else{
            printf("find:%d",x);
            break;
        }
    }
    
    if(top>bot) printf("do not exit x:%d",x);
}

#define N 8
void example_six_five(){
    double a[N],t;
    int i,j;
    for(i=0;i<N;i++)
        scanf("%lf",&a[i]);
    
    //冒泡排序
    for(i=1;i<=N-1;i++){
        //第i趟处理流程
//       第i趟操作的数组范围：0--n-i   （i从1开始）
//       也就代表数组下标范围不能超过 n-i，而数组取到了j+1，所以j+1<=n-i;推出j的范围
        for(j=0;j<=N-i-1;j++){
            //如果比下一个大，交换
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
            else continue;
        }
    }
    
    //选择排序
    for(i=1;i<=N-1;i++){
        //第i趟选择排序
        int k=i-1;//k是本趟要找的最小值的下标
        //int min=a[i-1];
        //找最小值
        for(j=i;j<=N-1;j++){
            if(a[j]<a[k]){
                //min=a[j];
                k=j;
            }
        }
        //交换
        int temp = a[i-1];
        a[i-1]=a[k];
        a[k] = temp;
    }
        
}
