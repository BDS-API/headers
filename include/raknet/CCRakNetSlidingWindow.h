#pragma once



using namespace RakNet;

class CCRakNetSlidingWindow {

public:

    void GetIsInSlowStart()const;
    CCRakNetSlidingWindow(void);
    void Init(unsigned long, unsigned int);
    void Update(unsigned long, bool);
    void GetRetransmissionBandwidth(unsigned long, unsigned long, unsigned int, bool);
    void GetTransmissionBandwidth(unsigned long, unsigned long, unsigned int, bool);
    void ShouldSendACKs(unsigned long, unsigned long);
    void GetSenderRTOForACK()const;
    void GetNextDatagramSequenceNumber();
    void GetAndIncrementNextDatagramSequenceNumber();
    void OnSendBytes(unsigned long, unsigned int);
    void OnGotPacketPair(RakNet::uint24_t, unsigned int, unsigned long);
    void OnGotPacket(RakNet::uint24_t, bool, unsigned long, unsigned int, unsigned int *);
    void GreaterThan(RakNet::uint24_t, RakNet::uint24_t);
    void OnResend(unsigned long, unsigned long);
    void OnNAK(unsigned long, RakNet::uint24_t);
    void OnAck(unsigned long, unsigned long, bool, double, double, double, bool, RakNet::uint24_t);
    void IsInSlowStart()const;
    void OnDuplicateAck(unsigned long, RakNet::uint24_t);
    void OnSendAckGetBAndAS(unsigned long, bool *, double *, double *);
    void OnSendAck(unsigned long, unsigned int);
    void OnSendNACK(unsigned long, unsigned int);
    void GetRTOForRetransmission(unsigned char)const;
    void SetMTU(unsigned int);
    void GetMTU()const;
    void GetLocalReceiveRate(unsigned long)const;
    void GetRTT()const;
    void LessThan(RakNet::uint24_t, RakNet::uint24_t);
    void GetBytesPerSecondLimitByCongestionControl()const;
};
