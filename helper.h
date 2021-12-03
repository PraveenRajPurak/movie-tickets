#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define max(X, Y) (((X) > (Y)) ? (X) : (Y))


int count_occurrences(const char *str, char c){
    int count = 0;
    while(*str){
        if(*str == c)
            count++;
        str++;
    }
    return count;
}
void clear ( void )
    {
      for ( int i = 0; i < 50; i++ ) // 50 is arbitrary
        printf("\n");
    }
int max_len(const char *str){
    //find max length of string before every line break character.
    int max = 0;
    int len = 0;
    while(*str){
        if(*str == '\n'){
            if(len > max)
                max = len;
            len = 0;
        }
        else
            len++;
        str++;
    }
    if(len > max)
        max = len;
    return max;
}
void red () {
  printf("\033[1;31m");
}
void yellow () {
  printf("\033[0;33m");
}
void cyan(){
    printf("\033[0;36m");
}
void white(){
    printf("\033[0;37m");
}
void green(){
    printf("\033[0;32m");
}
void reset () {
  printf("\033[0m");
}

void box_print(char *title, char* subtitle){
    int box_width = max(strlen(title),max_len(subtitle)) + 10;
    int box_height = count_occurrences(subtitle, '\n')+5;
    char string[1000];
    strcpy(string,subtitle);
    char *array[box_height];
    int t=0;

    array[t] = strtok(string,"\n");

    while(array[t]!=NULL)
    {
    array[++t] = strtok(NULL,"\n");
    }
    //print box_height
    printf(" ");
    yellow();
    for(int i = 0; i <=box_width; i++){
        printf("-");
    }
    reset();
    int counter = 0;
    for(int i = 0; i < box_height; i++){
        yellow();
        printf("\n||");
        reset();
        for(int j = 0; j < box_width; j++){
            //print title in middle of box
            
            if(j == box_width/2 - strlen(title)/2 && i == 1){
                cyan();
                printf("%s", title);
                j += strlen(title)-1;
                reset();
            }
            //print array in middle of box
            else if(counter<t&&j == 5 && i > 2){
                printf("%s", array[counter]);
                j+=strlen(array[counter])-1;
            }
            else{
                printf(" ");
            }
            reset();
        }
        if(i>2){
            counter++;
        }
        yellow();
        printf("||");
        reset();
    }
    printf("\n ");
    yellow();
    for(int i = 0; i <=box_width; i++){
        printf("-");
    }
    reset();  
}
int option(int mm){
    //take option from the user
    int option;
    green();
    printf("\nPlease choose an option: ");
    reset();
    scanf("%d", &option);
    while(option < 1 || option > mm){
        green();
        printf("\nInvalid input.\nPlease choose an option: ");
        reset();
        scanf(" %d", &option);
    }
    
    return option;
}