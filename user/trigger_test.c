#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int main(int argc, char *argv[]) 
{

    if(trigger() < 0) {
        fprintf(2, "trigger system call failed\n");
        exit(1);
    }
    exit(0);
}
