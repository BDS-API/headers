#pragma once

#include "uint24_t.h"


namespace RakNet {

    class CCRakNetSlidingWindow {

    public:
        void GetTransmissionBandwidth(unsigned long, unsigned long, unsigned int, bool);
        void OnAck(unsigned long, unsigned long, bool, double, double, double, bool, RakNet::uint24_t);
        bool IsInSlowStart()const;
        bool LessThan(RakNet::uint24_t, RakNet::uint24_t);
        void ShouldSendACKs(unsigned long, unsigned long);
        void GetRTOForRetransmission(unsigned char)const;
        void OnGotPacket(RakNet::uint24_t, bool, unsigned long, unsigned int, unsigned int *);
        void OnSendBytes(unsigned long, unsigned int);
        void OnResend(unsigned long, unsigned long);
        CCRakNetSlidingWindow();
        void GetNextDatagramSequenceNumber();
        void GreaterThan(RakNet::uint24_t, RakNet::uint24_t);
        void Update(unsigned long, bool);
        void OnSendNACK(unsigned long, unsigned int);
        void OnNAK(unsigned long, RakNet::uint24_t);
        void OnSendAckGetBAndAS(unsigned long, bool *, double *, double *);
        void Init(unsigned long, unsigned int);
        void GetRTT()const;
        ~CCRakNetSlidingWindow();
        void GetAndIncrementNextDatagramSequenceNumber();
        void GetLocalReceiveRate(unsigned long)const;
        void GetBytesPerSecondLimitByCongestionControl()const;
        void OnSendAck(unsigned long, unsigned int);
        void OnGotPacketPair(RakNet::uint24_t, unsigned int, unsigned long);
        void SetMTU(unsigned int);
        void GetIsInSlowStart()const;
        void OnDuplicateAck(unsigned long, RakNet::uint24_t);
        void GetSenderRTOForACK()const;
        void GetMTU()const;
        void GetRetransmissionBandwidth(unsigned long, unsigned long, unsigned int, bool);
    };
}
