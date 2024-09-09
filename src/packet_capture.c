#include <pcap.h>
#include "packet_capture.h"

pcap_t *handle;

int init_capture() {
    char errbuf[PCAP_ERRBUF_SIZE];
    handle = pcap_open_live("eth0", BUFSIZ, 1, 1000, errbuf);
    if (handle == NULL) {
        fprintf(stderr, "pcap_open_live() failed: %s\n", errbuf);
        return -1;
    }
    return 0;
}