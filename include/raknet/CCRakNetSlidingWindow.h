#pragma once

#include "uint24_t.h"


namespace RakNet {

    class CCRakNetSlidingWindow {

    public:
        void GetIsInSlowStart()const; // _ZNK6RakNet21CCRakNetSlidingWindow16GetIsInSlowStartEv
        CCRakNetSlidingWindow(); // _ZN6RakNet21CCRakNetSlidingWindowC2Ev
        ~CCRakNetSlidingWindow(); // _ZN6RakNet21CCRakNetSlidingWindowD2Ev
        void Init(unsigned long, unsigned int); // _ZN6RakNet21CCRakNetSlidingWindow4InitEmj
        void Update(unsigned long, bool); // _ZN6RakNet21CCRakNetSlidingWindow6UpdateEmb
        void GetRetransmissionBandwidth(unsigned long, unsigned long, unsigned int, bool); // _ZN6RakNet21CCRakNetSlidingWindow26GetRetransmissionBandwidthEmmjb
        void GetTransmissionBandwidth(unsigned long, unsigned long, unsigned int, bool); // _ZN6RakNet21CCRakNetSlidingWindow24GetTransmissionBandwidthEmmjb
        void ShouldSendACKs(unsigned long, unsigned long); // _ZN6RakNet21CCRakNetSlidingWindow14ShouldSendACKsEmm
        void GetSenderRTOForACK()const; // _ZNK6RakNet21CCRakNetSlidingWindow18GetSenderRTOForACKEv
        void GetNextDatagramSequenceNumber(); // _ZN6RakNet21CCRakNetSlidingWindow29GetNextDatagramSequenceNumberEv
        void GetAndIncrementNextDatagramSequenceNumber(); // _ZN6RakNet21CCRakNetSlidingWindow41GetAndIncrementNextDatagramSequenceNumberEv
        void OnSendBytes(unsigned long, unsigned int); // _ZN6RakNet21CCRakNetSlidingWindow11OnSendBytesEmj
        void OnGotPacketPair(RakNet::uint24_t, unsigned int, unsigned long); // _ZN6RakNet21CCRakNetSlidingWindow15OnGotPacketPairENS_8uint24_tEjm
        void OnGotPacket(RakNet::uint24_t, bool, unsigned long, unsigned int, unsigned int *); // _ZN6RakNet21CCRakNetSlidingWindow11OnGotPacketENS_8uint24_tEbmjPj
        void GreaterThan(RakNet::uint24_t, RakNet::uint24_t); // _ZN6RakNet21CCRakNetSlidingWindow11GreaterThanENS_8uint24_tES1_
        void OnResend(unsigned long, unsigned long); // _ZN6RakNet21CCRakNetSlidingWindow8OnResendEmm
        void OnNAK(unsigned long, RakNet::uint24_t); // _ZN6RakNet21CCRakNetSlidingWindow5OnNAKEmNS_8uint24_tE
        void OnAck(unsigned long, unsigned long, bool, double, double, double, bool, RakNet::uint24_t); // _ZN6RakNet21CCRakNetSlidingWindow5OnAckEmmbdddbNS_8uint24_tE
        bool IsInSlowStart()const; // _ZNK6RakNet21CCRakNetSlidingWindow13IsInSlowStartEv
        void OnDuplicateAck(unsigned long, RakNet::uint24_t); // _ZN6RakNet21CCRakNetSlidingWindow14OnDuplicateAckEmNS_8uint24_tE
        void OnSendAckGetBAndAS(unsigned long, bool *, double *, double *); // _ZN6RakNet21CCRakNetSlidingWindow18OnSendAckGetBAndASEmPbPdS2_
        void OnSendAck(unsigned long, unsigned int); // _ZN6RakNet21CCRakNetSlidingWindow9OnSendAckEmj
        void OnSendNACK(unsigned long, unsigned int); // _ZN6RakNet21CCRakNetSlidingWindow10OnSendNACKEmj
        void GetRTOForRetransmission(unsigned char)const; // _ZNK6RakNet21CCRakNetSlidingWindow23GetRTOForRetransmissionEh
        void SetMTU(unsigned int); // _ZN6RakNet21CCRakNetSlidingWindow6SetMTUEj
        void GetMTU()const; // _ZNK6RakNet21CCRakNetSlidingWindow6GetMTUEv
        void GetLocalReceiveRate(unsigned long)const; // _ZNK6RakNet21CCRakNetSlidingWindow19GetLocalReceiveRateEm
        void GetRTT()const; // _ZNK6RakNet21CCRakNetSlidingWindow6GetRTTEv
        bool LessThan(RakNet::uint24_t, RakNet::uint24_t); // _ZN6RakNet21CCRakNetSlidingWindow8LessThanENS_8uint24_tES1_
        void GetBytesPerSecondLimitByCongestionControl()const; // _ZNK6RakNet21CCRakNetSlidingWindow41GetBytesPerSecondLimitByCongestionControlEv
    };
}
