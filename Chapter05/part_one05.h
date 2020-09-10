
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
