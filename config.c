#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"sb-volume",     10,  10 },
    {"sb-battery",     1,   0 },
    {"sb-network",     1,   0 },
    {"sb-date",        1,   0 },
};

const unsigned short blockCount = LEN(blocks);
