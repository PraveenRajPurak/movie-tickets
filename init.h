#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include "admin.h"
#include "user.h"
#define max(X, Y) (((X) > (Y)) ? (X) : (Y))
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
#define abs(X) (((X) < 0) ? -(X) : (X))

void init() {
    // Initialize the movie-tickets library
    int selector;
    auth:
    clear();
    box_print("SELECT AN OPTION", "1. ADMINISTRATOR\n2. USER\n3. EXIT");
    selector = option(3);
    if(selector == 3){
        goto end;
    }
    clear();
    if(selector == 1){
        if(admin()==-1){
            goto auth;
        }
    }
    if(selector == 2){
        if(user()==-1){
            goto auth;
        }
    }
    end:
    return;
}