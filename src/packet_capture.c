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

void start_capture() {
    pcap_loop(handle, 0, packet_handler, NULL);
}

void packet_handler(u_char *user, const struct pcap_pkthdr *pkthdr, const u_char *packet)