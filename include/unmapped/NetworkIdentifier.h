#pragma once

#include "../raknet/AddressOrGUID.h"
#include "../raknet/RakNetGUID.h"
#include "../raknet/SystemAddress.h"
#include <string>


class NetworkIdentifier {

public:
//  NetworkIdentifier(sockaddr_in6 const&); //TODO: incomplete function definition
    void getHash()const;
    void getRakNetGUID()const;
    NetworkIdentifier(RakNet::RakNetGUID const&);
    NetworkIdentifier(RakNet::SystemAddress const&);
    void getSocketAddress()const;
    void getSocketAddress6()const;
    void _init(RakNet::SystemAddress const&);
    NetworkIdentifier(std::string const&, unsigned short);
    std::string toString()const;
    void operator==(NetworkIdentifier const&)const;
//  void _init(sockaddr_in6 const&); //TODO: incomplete function definition
//  void _init(sockaddr_in const&); //TODO: incomplete function definition
    void getPort()const;
    bool isUnassigned()const;
    NetworkIdentifier();
//  bool isType(NetworkIdentifier::Type)const; //TODO: incomplete function definition
    NetworkIdentifier(RakNet::AddressOrGUID const&);
//  NetworkIdentifier(sockaddr_in const&); //TODO: incomplete function definition
    bool equalsTypeData(NetworkIdentifier const&)const;
    std::string getAddress()const;
    void _init(RakNet::RakNetGUID const&);
};
