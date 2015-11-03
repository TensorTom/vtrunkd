
#ifndef _CONST_H
#define _CONST_H

// max aggregated VPN-links compiled-in (+ some extras for racing)
#define MAX_TCP_PHYSICAL_CHANNELS 7
#define AGAG_AG_THRESH 30 // how many agag to consider AG mode
#define DROP_TIME_IMMUNE 1500000 // useconds of drop immune
#define MAX_HSQS_EAT 20 // percent of channel send_q allowed to be eaten in SELECT_SLEEP_USEC
#define MAX_HSQS_PUSH 20 // the same for push MSBL to network
#define MSBL_LIMIT 1000
#define MSBL_RESERV 150

#endif