#include<stdio.h>
#include<stdlib.h>
//FILE* fopen(char* filename,char* mode)

FILE* openFile(char* filename,char* mode){
    FILE* fp;
    if((fp=fopen(filename,mode))==NULL){
        printf("can not open file");
        //exit(0);
    }
    return fp;
}
//从一个文件拷贝到另一个文件
void fileCopy(){
    FILE *source,*intention;
    source = openFile("source.txt","r");//打开文件
    intention = openFile("intention.txt","w");
    int ch;
    while((ch=fgetc(source))!=EOF){
        fputc(ch,intention);
    }
    fclose(source);
    fclose(intention);
}

#define cap 100
struct student{
    char name[10];
    int s[3];
    double ave;
}stu[cap]={{"a2005003",90,75,82,82.3},{"a2005003",76,80,69,75.0},{"a2005002",72,81,63,72.0}};
int len=3;

void printStu(){
    for(int i=0;i<len;i++)
        printf("%s %d %d %d %.1f\n",stu[i].name,stu[i].s[0],stu[i].s[1],stu[i].s[2],stu[i].ave);
}

void stuSort(){
    struct student temp;
    printStu();
    scanf("%s%d%d%d%lf",temp.name,&temp.s[0],&temp.s[1],&temp.s[2],&temp.ave);
    //寻找插入位置
    int position=-1;
    for(int i=0;i<cap;i++){
        if(temp.ave>stu[i].ave){
            position=i;
            break;
        }
    }
    
    //移动元素,插入右移，从后往前
    for(int i=len-1;i>=position;i--){
        stu[i+1]=stu[i];
    }
    
    stu[position]=temp; //插入
    len++;
    printf("after insert:\n");
    printStu();
}

