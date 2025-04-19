#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "custom_logger.h"

void log_message(int level, const char *message) {
    switch(level) {
        case 0:
            printf("INFO −  %s\n", message);
            break;
        case 1:
            printf("WARNING −  %s\n", message);
            break;
        case 2:
            printf("ERROR −  %s\n", message);
            break;
        default:
            printf("UNKNOWN −  %s\n", message);
            break;
    }
}
