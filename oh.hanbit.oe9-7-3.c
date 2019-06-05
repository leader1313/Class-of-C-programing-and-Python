#include <stdio.h>
#include <string.h>
void strrev(char s[]){
    char temp = '\0';
    char *first = s;
    char *last = s;

    // 長さ0の文字列なら操作せず返す
    if(*first == '\0'){ return; }

    // 文字列の最後の文字のポインタを取得する
    while( *(last+1) != '\0'){ last++; }

    // 外側から逆にする
    while(first < last){
        temp = *first;
        *first = *last;
        *last = temp;

        // 一つずつ範囲を小さくする
        first++;
        last--;
    }
    return;
}
int main(void){
    char str[80];
    char str1[80];
    int i=0;
    int j=0;
    char *p;
    char first[80];
    char seccond[80];
    
    scanf("%s",str);
    strcpy(str1,str);
    // printf("%s",str);
    
    if(strlen(str)%2==0){
        i = strlen(str)/2;
        p=(str+i);
        strcpy(seccond,p);
        *(str+i)='\0';
        strcpy(first,str);
        strrev(seccond);
        printf("%s\n",first);
        printf("%s\n",seccond);
        if(strcmp(first,seccond)==0){
            printf("%s -->   回文である",str1);   
        }else{
            printf("%s -->   回文ではない",str1);   
        }
    }else{
        j = strlen(str)/2;
        p=(str+j+1);
        strcpy(seccond,p);
        *(str+j)='\0';
        strcpy(first,str);
        strrev(seccond);
        printf("%s\n",first);
        printf("%s\n",seccond);
         if(strcmp(first,seccond)==0){
            printf("%s -->   回文である",str1);   
        }else{
            printf("%s -->   回文ではない",str1);   
        }
    }
}
