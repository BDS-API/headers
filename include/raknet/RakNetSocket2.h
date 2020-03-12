#pragma once



namespace RakNet {

    class RakNetSocket2 {

    public:
        virtual void SetMulticastInterface(int);
        ~RakNetSocket2();
        RakNetSocket2();
        void GetMyIP(RakNet::SystemAddress *);
        void GetMyAdapters(RakNet::NetworkAdapter *);
        void DomainNameToIP(char const*, char *);
        void SetRecvEventHandler(RakNet::RNS2EventHandler *);
        void GetUserConnectionSocketIndex()const;
//      void SetSocketType(RakNet::RNS2Type); //TODO: incomplete function definition
        void GetSocketType()const;
        void GetEventHandler()const;
        void SetUserConnectionSocketIndex(unsigned int);
        bool IsBerkleySocket()const;
        void GetBoundAddress()const;
    };
}
