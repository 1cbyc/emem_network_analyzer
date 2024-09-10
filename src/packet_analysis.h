#ifndef PACKET_ANALYSIS_H
#define PACKET_ANALYSIS_H

#include <pcap.h>  // added pcap.h to define u_char

void analyze_packet(const u_char *packet);

#endif