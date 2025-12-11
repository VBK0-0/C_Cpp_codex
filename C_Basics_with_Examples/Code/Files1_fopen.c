#include<stdio.h>
int main()
{
    FILE* fp;
    fp = fopen("C:/Users/VARJULA BALAKRISHNA/Documents/C_Cpp_codex/C_Basics_with_Examples/Test_file.txt","r");
    if(fp ==NULL)
    printf("File not present\n");
    else
    printf("File opened in read mode\n");
}