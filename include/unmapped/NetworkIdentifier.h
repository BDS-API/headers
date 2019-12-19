#pragma once

class NetworkIdentifier {

public:

    bool isType(NetworkIdentifier::Type)const;
    NetworkIdentifier(void);
    void getRakNetGUID(void)const;
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
    void getHash(void)const;
    void getPort(void)const;
    void equalsTypeData(NetworkIdentifier const&)const;
    void getSocketAddress(void)const;
    void getSocketAddress6(void)const;
    bool isUnassigned(void)const;
};
