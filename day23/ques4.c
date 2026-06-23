#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],maxchar,i;
    int freq[256],maxfreq=0;
    printf("enter a string");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]'\0';i++){
        freq(unsigned char)str[i]++;
    }
    for(i=0;str[i]!='\0';i++){
        if(freq[(unsigned char)str[i]]>maxfreq){
            maxfreq=freq[(unsigned char)str[i]];
            maxchar=str[i];
        }
    }
    printf("maximum occurring character:%c\n",maxchar);
    printf("frequency: %d\n",maxfreq);
    return 0;
}