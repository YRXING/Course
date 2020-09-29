#include<stdio.h>
#include<string.h>
//usigned int strlen(char *s);
int mystrlen(char *s){
    int len=0;
    while(*s!='\0'){
        s++;
        len++;
    }
//    for(;*s!='\0';s++){
//        len++;
//    }
    return len;
}
//char* strcat(char* s1,char *s2);
char* mystrcat(char *s,char *t){
    char *temp=s;
    while(*s!='\0') s++;
    while(*t!='\0'){
        *s=*t;
        s++;
        t++;
    }
    *s='\0';
    return temp;
}
