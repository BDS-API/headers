#pragma once



using namespace RakNet;

class SocketLayer {

public:

    void SetSocketOptions(int, bool, bool);
    void GetSubNetForSocketAndIp(RakNet::RakString);
    void GetMyAdapters(RakNet::NetworkAdapter *);
    void GetMyIP(RakNet::SystemAddress *);
    void GetLocalPort(int);
    void GetSystemAddress(int, RakNet::SystemAddress *);
    void GetSystemAddress_Old(int, RakNet::SystemAddress *);
    void GetFirstBindableIP(char *, int);
};
