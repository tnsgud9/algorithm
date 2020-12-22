#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void p_14()
{
    srand(time(NULL));
    int  count[10], i, sum = 0;
    char c;
    FILE* fp;

    fp = fopen("number.txt", "w");
    if (fp == NULL)
    {
        printf("File open에 오류 발생!");
        exit(1);
    }
    for (i = 0; i < 1000; i++)
    {
        fprintf(fp, "%d", rand() % 10);
    }
    fclose(fp);

    printf("\n number.txt.에서 읽어서 빈도수 계산..\n\n");
    fp = fopen("number.txt", "r");
    if (fp == NULL)
    {
        printf("File open에 오류 발생!");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF)
    {
        count[c - 48] += 1;
    }
    fclose(fp);

    for (i = 0; i <= 9; i++)
    {
        printf("번호 %d :  %4d\n", i, count[i]);
        sum += count[i];
    }
    printf("sum=%4d\n", sum);
}