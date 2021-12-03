#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include "helper.h"
#define max(X, Y) (((X) > (Y)) ? (X) : (Y))
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
#define abs(X) (((X) < 0) ? -(X) : (X))

int admin(){
    clear();
    box_print("ADMIN DASHBOARD",
    "Welcome to the admin dashboard.\n1. Add movie\n2. Show all users\n3. Show all movies\n4. Show all tickets\n5. Delete movie\n6. Back to main menu\n7. Exit");
    int selector = option(7);
    if(selector == 6 ) return -1;
    if(selector == 7) return -2;
    
    
    return 0;
}