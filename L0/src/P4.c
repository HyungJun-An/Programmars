#include <string.h>
#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    memset(s1,0x00,sizeof(s1));
    scanf("%s", s1);
    int length=strlen(s1);
    int i=0;
    while(i<length)
    {
        if(s1[i]<97)
        {
            s1[i]+=32;
        }
        else
        {
            s1[i]-=32;
        }
        i++;
            
    }
    printf("%s",s1);
    return 0;
}

