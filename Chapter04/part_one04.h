#include<math.h>

//统计学生不及格人数，平均成绩
//注意格式输出
void practice_four_one(){
    int count=0,i,n=0;
    double grade=0,sum=0;
    
    while(grade>=0){
        scanf("%lf",&grade);
        //单独判断是否结束
        if(grade<0) break;
        
        if(grade<60) count++;
        
        sum+=grade;
        n++;
    }
    if(n == 0) printf("Average = 0.00");
    else{
        printf("Average = %.2f\nCount = %d",sum/n,count);
    }
}

int isPrime(int n){
    int m=sqrt(n);
    if(n==1) return 0;
    for(int i=2;i<=m;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
//输出2-n之间全部素数
void put_prime(int n){
    int count=0;
    for(int num=2;num<=n;num++){
        if(isPrime(num)){
            printf("%6d",num);
            count++;
        }
        if(!count%10) printf("\n");
    }
    if(count%10) printf("\n");
}

//用格里高利公式求给定精度的PI值 (15分)
//本题要求编写程序，计算序列部分和 4*(1−1/3+1/5−1/7+...) ，直到最后一项的绝对值小于给定精度eps
void caculate_pi(){
    double eps,item=1,pi=1;
    int d=1,flag=1;
    scanf("%lf",&eps);
    while(fabs(item)>=eps){
        d+=2;
        flag*=-1;
        item = flag*1.0/d;
        pi+=item;
    }
    pi*=4;
    printf("Pi = %.4f\n",pi);
}

//输入正奇数，打印下面图形
//  *       1   1   2
// ***      2   3   1
//*****     3   5   0
// ***      i   2*i-1   m+1-i
//  *

void print_chart(){
    int n;
    scanf("%d",&n);
    int m=n/2;
    for(int i=1;i<=m+1;i++){
        for(int j=1;j<=m+1-i;j++) printf(" ");
        for(int j=1;j<=2*i-1;j++) printf("*");
        printf("\n");
    }
    
    for(int i=m;i>=1;i--){
        for(int j=1;j<=m+1-i;j++) printf(" ");
        for(int j=1;j<=2*i-1;j++) printf("*");
        printf("\n");
    }
}


//海伦公式：sqrt(l(l-a)(l-b)(l-c)),其中 l=(a+b+c)/2
double area(double a,double b,double c){
    double l = (a+b+c)/2;
    double s;
    s= sqrt(l*(l-a)*(l-b)*(l-c));
    return s;
}
