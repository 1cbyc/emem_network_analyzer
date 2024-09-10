#ifndef PACKET_CAPTURE_H
#define PACKET_CAPTURE_H

#include <pcap.h>  // Include pcap.h to define u_char and pcap_pkthdr

int init_capture();
void start_capture();
void packet_handler(u_char *user, const struct pcap_pkthdr *pkthdr, const u_char *packet);

#endif