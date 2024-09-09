#include <stdio.h>
#include "packet_capture.h"

int main() {
    printf("Emem Network Analyzer\n");

    // to initiate packet capture
    if (init_capture() < 0) {
        fprintf(stderr, "failed to init")
    }
}
