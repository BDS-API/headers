#pragma once



namespace RakNet {

    class RakNetSocket2 {

    public:
        ~RakNetSocket2(); // _ZN6RakNet13RakNetSocket2D2Ev
        virtual void SetMulticastInterface(int); // _ZN6RakNet13RakNetSocket221SetMulticastInterfaceEi
        RakNetSocket2(); // _ZN6RakNet13RakNetSocket2C2Ev
        void SetRecvEventHandler(RakNet::RNS2EventHandler *); // _ZN6RakNet13RakNetSocket219SetRecvEventHandlerEPNS_16RNS2EventHandlerE
        void GetSocketType()const; // _ZNK6RakNet13RakNetSocket213GetSocketTypeEv
//      void SetSocketType(RakNet::RNS2Type); //TODO: incomplete function definition // _ZN6RakNet13RakNetSocket213SetSocketTypeENS_8RNS2TypeE
        bool IsBerkleySocket()const; // _ZNK6RakNet13RakNetSocket215IsBerkleySocketEv
        void GetBoundAddress()const; // _ZNK6RakNet13RakNetSocket215GetBoundAddressEv
        void GetMyIP(RakNet::SystemAddress *); // _ZN6RakNet13RakNetSocket27GetMyIPEPNS_13SystemAddressE
        void GetMyAdapters(RakNet::NetworkAdapter *); // _ZN6RakNet13RakNetSocket213GetMyAdaptersEPNS_14NetworkAdapterE
        void GetUserConnectionSocketIndex()const; // _ZNK6RakNet13RakNetSocket228GetUserConnectionSocketIndexEv
        void SetUserConnectionSocketIndex(unsigned int); // _ZN6RakNet13RakNetSocket228SetUserConnectionSocketIndexEj
        void GetEventHandler()const; // _ZNK6RakNet13RakNetSocket215GetEventHandlerEv
        void DomainNameToIP(char const*, char *); // _ZN6RakNet13RakNetSocket214DomainNameToIPEPKcPc
    };
}
