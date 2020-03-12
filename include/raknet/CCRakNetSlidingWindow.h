#pragma once

#include "uint24_t.h"


namespace RakNet {

    class CCRakNetSlidingWindow {

    public:
        void OnSendBytes(unsigned long, unsigned int);
        void GetRTOForRetransmission(unsigned char)const;
        void OnGotPacket(RakNet::uint24_t, bool, unsigned long, unsigned int, unsigned int *);
        void Update(unsigned long, bool);
        void OnAck(unsigned long, unsigned long, bool, double, double, double, bool, RakNet::uint24_t);
        void OnNAK(unsigned long, RakNet::uint24_t);
        void GetSenderRTOForACK()const;
        ~CCRakNetSlidingWindow();
        void OnSendAckGetBAndAS(unsigned long, bool *, double *, double *);
        void GetTransmissionBandwidth(unsigned long, unsigned long, unsigned int, bool);
        void GetNextDatagramSequenceNumber();
        void GetRTT()const;
        void OnSendNACK(unsigned long, unsigned int);
        void OnSendAck(unsigned long, unsigned int);
        void SetMTU(unsigned int);
        void GetMTU()const;
        bool LessThan(RakNet::uint24_t, RakNet::uint24_t);
        void GetBytesPerSecondLimitByCongestionControl()const;
        void GetLocalReceiveRate(unsigned long)const;
        void GetIsInSlowStart()const;
        bool IsInSlowStart()const;
        void GetAndIncrementNextDatagramSequenceNumber();
        void OnGotPacketPair(RakNet::uint24_t, unsigned int, unsigned long);
        void OnDuplicateAck(unsigned long, RakNet::uint24_t);
        void GetRetransmissionBandwidth(unsigned long, unsigned long, unsigned int, bool);
        void GreaterThan(RakNet::uint24_t, RakNet::uint24_t);
        void Init(unsigned long, unsigned int);
        CCRakNetSlidingWindow();
        void ShouldSendACKs(unsigned long, unsigned long);
        void OnResend(unsigned long, unsigned long);
    };
}
