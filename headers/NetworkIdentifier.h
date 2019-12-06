#pragma once

class NetworkIdentifier {

public:

    bool isType(NetworkIdentifier::Type)const;
    void NetworkIdentifier(void);
    void getRakNetGUID(void)const;
    void NetworkIdentifier(RakNet::RakNetGUID const&);
    void _init(RakNet::RakNetGUID const&);
    void NetworkIdentifier(RakNet::SystemAddress const&);
    void _init(RakNet::SystemAddress const&);
    void NetworkIdentifier(RakNet::AddressOrGUID const&);
    void NetworkIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned short);
    void _init(sockaddr_in6 const&);
    void _init(sockaddr_in const&);
    void NetworkIdentifier(sockaddr_in const&);
    void NetworkIdentifier(sockaddr_in6 const&);
    void getHash(void)const;
    void getPort(void)const;
    void equalsTypeData(NetworkIdentifier const&)const;
    void getSocketAddress(void)const;
    void getSocketAddress6(void)const;
    bool isUnassigned(void)const;
};
