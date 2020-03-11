#pragma once

#include "../raknet/AddressOrGUID.h"
#include "../raknet/RakNetGUID.h"
#include "./NetworkIdentifier.h"
#include "../raknet/SystemAddress.h"
#include <string>


class NetworkIdentifier {

public:

    void operator==(NetworkIdentifier const&)const;
//  bool isType(NetworkIdentifier::Type)const; //TODO: incomplete function definition
    NetworkIdentifier();
    void getRakNetGUID()const;
    NetworkIdentifier(RakNet::RakNetGUID const&);
    void _init(RakNet::RakNetGUID const&);
    NetworkIdentifier(RakNet::SystemAddress const&);
    void _init(RakNet::SystemAddress const&);
    NetworkIdentifier(RakNet::AddressOrGUID const&);
    NetworkIdentifier(std::string const&, unsigned short);
//  void _init(sockaddr_in6 const&); //TODO: incomplete function definition
//  void _init(sockaddr_in const&); //TODO: incomplete function definition
//  NetworkIdentifier(sockaddr_in const&); //TODO: incomplete function definition
//  NetworkIdentifier(sockaddr_in6 const&); //TODO: incomplete function definition
    void getHash()const;
    std::string toString()const;
    std::string getAddress()const;
    void getPort()const;
    bool equalsTypeData(NetworkIdentifier const&)const;
    void getSocketAddress()const;
    void getSocketAddress6()const;
    bool isUnassigned()const;
};
