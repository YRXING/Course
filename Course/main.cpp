#include <stdio.h>
#include <math.h>


#define maxInt ((1<<30)-1)
#define minInt (-(1<<30))

using namespace std;

//2.计算数字之和
int sumN(int n){
//    int sum=0;
//    while(n!=0){
//        sum+=n%10;
//        n/=10;
//    }
    //return sum;
    if(n==0) return 0;
    return n%10+sumN(n/10);
}
//sumN(n) = n%10 + sumN(n/10)

//3.digit(n,k)=digit(n/10,k-1)=   return 0
int digit(int n,int k){
//    while(n!=0){
//        if(k==1) return n%10;
//        n/=10;//右移
//        k--;
//    }
//    return 0;

    if(k==1) return n%10;
    else return digit(n/10, --k);//前缀后缀区别

}

//13.
double cal(double e){
    
    double s=0;
    int i=1;
    double now=1.0/i;
    while(now>=e){
      //  printf("%lf\n",now);
        s+=now;
        i++;
        now/=i;
    }
    return s;
}

double calr(double e,int i,double value,double s){
    double now = value/i;
    if(now>=e){
        s+=now;
        return calr(e, ++i, now, s);
    }
    else return s;
}

void example__six_one(){
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



int main(int argc, const char * argv[]) {
    practice_six_one();
    return 0;
}

