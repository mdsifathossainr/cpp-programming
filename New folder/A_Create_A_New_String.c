#include<stdio.h>
int main()
{
    char S[1001];
    scanf("%s",S);
    char T[1001];
    scanf("%s",T);

    int lengthS = strlen(S);
    int lengthT = strlen(T);

    printf("%d %d\n",lengthS , lengthT);
    printf("%s %s",S ,T);

    return 0;

}
