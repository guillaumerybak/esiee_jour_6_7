#ifndef PACKET_H_
# define PACKET_H_

struct Packet
{
    int magic;
    char email[42];
    int lho;
    char operator;
    int rho;
    int result;
} __attribute__((packed, aligned(1)));

#endif
