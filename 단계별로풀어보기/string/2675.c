//문자열 반복
#include <stdio.h>
#include <string.h>

int main(){
    int T,R;

    scanf("%d",&T);
    for(int i=0;i<T;i++){
        char S[21];
        scanf("%d %s",&R,S);
        for(int j=0; j<strlen(S); j++)
            for(int k=0; k<R; k++) printf("%c",S[j]);
        printf("\n");
    }
}