//类型标识符 函数名（类型 行参变量，类型 行参变量）{
//    语句序列;
//}


int isPrime(int n){
    if(n==1) return 0;
    
    int flag=1;
    for(int i=2;i<n;i++){
      if(n%i==0){
          flag=0;
          break;
      }
      else continue;
    }
    return flag;
}

double Mymax(double c,double d){
    return c>d?c:d;
}

void swap(int a,int b){
    
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("in swap a:%d b:%d",a,b);
}

double circle(double r){
    return 3.14*r*r;
}

//海伦公式：sqrt(l(l-a)(l-b)(l-c)),其中 l=(a+b+c)/2
double triangle(double a,double b,double c){
    double l = (a+b+c)/2;
    return sqrt(l*(l-a)*(l-b)*(l-c));
}

double rectangle(double c,double d){
    return c*d;
}

//cmn = m!/(n!*(m-n)!)

int jc(int n){  //阶乘函数
    int s=1,i;
    for(i=1;i<=n;i++){
        s=s*i;
    }
    return s;
}

//递归实现
int jc2(int n){
    if(n==1) return 1;
    else return n*jc2(n-1);
}
//n!->n*(n-1)!
//(n-1)!->(n-1)*(n-2)!
//..
//2!=2*1!
//1!=1

//递归斐波那契数列
//  n1=1,n2=2,n3=n2+n1....Nn=Nn-1+Nn-2
int fibo(int index){
    if(index==1) return 1;
    if(index==2) return 2;
    return fibo(index-1)+fibo(index-2);
}

int cmn(int m,int n){
    return jc(m)/(jc(n)*jc(m-n));
}


