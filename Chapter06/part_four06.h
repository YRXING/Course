#include<stdio.h>
#include<math.h>
#include<string.h>
#define maxn 100


void print_arr(int *a,int n){
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));
    putchar('\n');
}
//约瑟夫问题
void practice_six_six(){
    int m;//预先设定的人
    int n;//数到n的人出圈
    int people[maxn]={};
    scanf("%d %d",&m,&n);
    //初始化序列1,2,3...m
    for(int i=0;i<m;i++){
        people[i]=i+1;
    }
    //print_arr(people, m);
    int count=m;//计算出列人数，count=0时候循环截止
    //初始化各个变量
    int i=0,pos=0;
    
    while(count){
        while(pos!=n){
            if(people[i]!=0)//如果没有出列，pos++
                pos++;//喊到
            if(pos==n) break;
            i=(i+1)%m;//循环遍历数组
        }
        printf("%d ",people[i]);
        people[i]=0;//出列
        pos=0;
        count--;
        putchar('\n');
        //print_arr(people, m);
    }
}

//输出5*6数组绝对值最大的元素以及对应下标值
void practice_six_eight(){
    int arr[5][6];
    for(int i=0;i<5;i++)
        for(int j=0;j<6;j++)
            scanf("%d",&arr[i][j]);
    int max=fabs(arr[0][0]);
    int col=0,row=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<6;j++){
            if(max<fabs(arr[i][j])){
                max = fabs(arr[i][j]);
                col=j,row=i;
            }
        }
    printf("max absolute value:%d\nrow:%d\ncol:%d\n",arr[row][col],row,col);
}

//判断字串
void practice_six_fourteen(){
    char str[maxn];
    char sub[maxn];
    printf("请输入总字符串：\n");
    gets(str);
    printf("请输入子串：\n");
    gets(sub);//不检查能否装得下，装不下也要装，c99不建议，c11弃用
    int len1 = strlen(str);
    int len2 = strlen(sub);
    if(len1<len2){
        printf("no\n");
        return;
    }
    int pos,i=0;
    while(i<len1){
        pos=0;
        while(pos<len2){
            if(str[i+pos]==sub[pos]){
                pos++;
            }else break;
        }
        if(pos<len2) i++;
        else{
            printf("yse\nfirst position:%d\n",i);
            return;
        }
    }
    printf("no\n");
}

//统计字符串中某一字符的个数
void practice_six_eighteen(){
    char str[maxn];
    printf("请输入字符串：\n");
    gets(str);
    printf("请输入要统计的字符：\n");
    char c;
    c=getchar();
    int count=0,len=strlen(str);
    for(int i=0;i<len;i++)
        if(str[i]==c) count++;
    printf("一共出现%d次\n",count);
    
}

//删除字符串中的某一个字符
void practice_six_nineteen(){
    char str[maxn];
    char c;
    printf("请输入字符串:\n");
    gets(str);
    printf("请输入要删除的字符:\n");
    c=getchar();
    int len=strlen(str);
    for(int i=0;i<len;i++)
        if(str[i]==c) str[i]='\0';
    //不能用%s整体输出了
    for(int i=0;i<len;i++)
        if(str[i]!='\0')
            putchar(str[i]);
    putchar('\n');
}
