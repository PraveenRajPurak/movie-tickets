#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define max(X, Y) (((X) > (Y)) ? (X) : (Y))
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
#define abs(X) (((X) < 0) ? -(X) : (X))

int user(){
    clear();
    box_print("MOVIE TICKETS DASHBOARD",
    "Welcome to the Movie Mania!\n1. Login\n2. Sign Up\n3. Back to Main Menu\n4. Exit");
    int selector = option(4);
    if(selector == 3 ) return -1;
    if(selector == 4) return -2;
    
    return 0;
}