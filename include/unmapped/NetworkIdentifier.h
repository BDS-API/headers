#pragma once

#include "../raknet/RakNetGUID"
#include "../raknet/AddressOrGUID"
#include "../raknet/SystemAddress"


class NetworkIdentifier {

public:

    bool isType(NetworkIdentifier::Type)const;
    NetworkIdentifier(void);
    void getRakNetGUID()const;
    NetworkIdentifier(RakNet::RakNetGUID const&);
    void _init(RakNet::RakNetGUID const&);
    NetworkIdentifier(RakNet::SystemAddress const&);
    void _init(RakNet::SystemAddress const&);
    NetworkIdentifier(RakNet::AddressOrGUID const&);
    NetworkIdentifier(std::string const&, unsigned short);
    void _init(sockaddr_in6 const&);
    void _init(sockaddr_in const&);
    NetworkIdentifier(sockaddr_in const&);
    NetworkIdentifier(sockaddr_in6 const&);
    void getHash()const;
    void getPort()const;
    bool equalsTypeData(NetworkIdentifier const&)const;
    void getSocketAddress()const;
    void getSocketAddress6()const;
    bool isUnassigned()const;
};
