#include <stdio.h>
#include <string.h>
int isLetra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
int isVogalChar(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
int isDigito(char c) {
    return c >= '0' && c <= '9';
}
int isSomenteVogais(const char* s){ // x1 confere se a string é composta somente somente por vogais
    int len = strlen(s);
    if (len == 0) {
        return 0;
    }
    for (int i = 0; i < len; i++) {
        if (!isVogalChar(s[i])) {
            return 0;
        }
    }
    return 1;
}
int isSomenteConsoantes(const char* s){ // x2 confere se a string é composta somente somente por vogais
    int len = strlen(s);
    if (len == 0) {
        return 0;
    }
    for (int i = 0; i < len; i++){
        if (!isLetra(s[i]) || isVogalChar(s[i])){
            return 0;
        }
    }
    return 1;
}
int isInteiro(const char* s){ // x3 confere se a string é composta somente somente por numeros inteiros
    int len = strlen(s);
    if(len==0){
        return 0;
    }
    for(int i = 0; i < len; i++){
        if(!isDigito(s[i])){
            return 0;
        }
    }
    return 1;
}
int isReal(const char* s){ // x4 confere se a string é composta somente somente por numeros reais
    int len=strlen(s);
    if (len==0) {
        return 0;
    }
    int separadorCount=0;
    int digitoCount=0;
    for (int i=0; i<len; i++) {
        if(isDigito(s[i])){
            digitoCount++;
        }else if(s[i]=='.' || s[i]==','){
            separadorCount++;
        }else{
            return 0;
        }
    }
    if(separadorCount<=1 && digitoCount>0) {
        return 1;
    }
    return 0;
}
int main(){
    char linha[1000];
    while(scanf(" %[^\n]", linha)==1){
        if(strcmp(linha, "FIM")==0){
            break;
        }
        int x1=isSomenteVogais(linha);
        int x2=isSomenteConsoantes(linha);
        int x3=isInteiro(linha);
        int x4=isReal(linha);
        printf("%s %s %s %s\n",x1?"SIM":"NAO",x2?"SIM":"NAO",x3?"SIM":"NAO",x4?"SIM":"NAO");
    }
    return 0;
}