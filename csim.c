#include "cachelab.h"
#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
//Asher Gingerich
//John Khol
int s;
int E;
int b;
char *trace;
void checkFlags(int count, char *value[]) {
    int c;
    while((c = getopt(count, value, "hvs:E:b:t:")) != -1) {
        switch(c) {
            case 'h':
                printf("Case h called!\n");
                break;
            case 'v':
                break;
            case 's':
                s = atoi(optarg);
                break;
            case 'E':
                E = atoi(optarg);
                break;
            case 'b':
                b = atoi(optarg);
                break;
            case 't':
                trace = optarg;
                break;
        }
    }
}

int main(int argc, char *argv[])
{
    checkFlags(argc, argv);
    //Print out counts
    //hit_count, miss_count, eviction_count
    printSummary(0, 0, 0);
    return 0;
}


