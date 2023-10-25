#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int ftstrlen(char* s1){
    int i=0;
    while(s1[i]!='\0')
        i++;
    return i;
}

int get_line_break(char* string){
    int sizeString=ftstrlen(string);
    for(int i=0;i<sizeString;i++){
        if(string[i]=='\n') {
            return i;
        }
    }
    return -1;
}

char* ftstrcpy(char* source,char* destination){
    char* retdestination=destination;
    int i=0;
    while(source[i]!='\0'){
        destination[i]=source[i];
        i++;
    }
    destination[i]='\0';
    return retdestination;
}

char*  ftstrcat(char* s1,char* s2){
    //printf("Conc:%s\n",s2);
    int sizeS1=ftstrlen(s1);
    int sizeS2=ftstrlen(s2);
    //printf("Conc::%s\n",s2);
    char* concatenated= (char*)malloc(sizeof(char) * (sizeS1+sizeS2+1));
    //
    //printf("Conc:::%s\n",s2);
    ftstrcpy(s1,concatenated);
    ftstrcpy(s2,concatenated+sizeS1);
    concatenated[sizeS1+sizeS2]='\0';
    free(s1);
    free(s2);
    //printf("Conc:%s\n",concatenated);
    return concatenated;
    
}
char* ft_alloc(int i){
    char* str = (char*)malloc(i);
    for(int j = 0; j < i; j++){
        str[j] = '\0';
    }
    return str;
}