#include <stdio.h>
#include <string.h>

void count(char a[], int b[])
{
    int i, j;
    
    for(i = 'a'; i <= 'z'; i++)
    {
        for(j = 0; j < strlen(a); j++)
        {
           if(i == a[j])
               b[i-'a']++;
        }
    }
}
void COUNT(char a[], int b[])
{
    int i, j;
    
    for(i = 'A'; i <= 'Z'; i++)
    {
        for(j = 0; j < strlen(a); j++)
        {
           if(i == a[j])
               b[i-'A']++;
        }
    }    
}

int main(void)
{
    int i, j, max=0, result=0;
    char arr[1000000];
    int cnt[26] = {0, };
    int select = 0;
    
    scanf("%s", arr);
    
    count(arr, cnt);
    COUNT(arr, cnt);
    
    max = cnt[0];
    for(i = 1; i < 26; i++)
    {
        if(max < cnt[i])
        {
            max = cnt[i];
            select = i;
        }
    }
    
    for(i = 0; i < 26; i++)
    {
        if(max == cnt[i])
            result++;
    }
    if(result > 1)
        printf("?\n");
    else
        printf("%c", select+'A');
    return 0;
}