#pragma once

#include <string>


class NetworkIdentifier {

public:
    NetworkIdentifier(RakNet::SystemAddress const&);
    void getSocketAddress6()const;
    void getRakNetGUID()const;
    NetworkIdentifier(RakNet::AddressOrGUID const&);
    void _init(RakNet::RakNetGUID const&);
    NetworkIdentifier(std::string const&, unsigned short);
//  NetworkIdentifier(sockaddr_in const&); //TODO: incomplete function definition
    NetworkIdentifier(RakNet::RakNetGUID const&);
    void getPort()const;
//  NetworkIdentifier(sockaddr_in6 const&); //TODO: incomplete function definition
    void getSocketAddress()const;
    void getHash()const;
    bool isUnassigned()const;
    std::string getAddress()const;
//  void _init(sockaddr_in const&); //TODO: incomplete function definition
    void _init(RakNet::SystemAddress const&);
    std::string toString()const;
    bool equalsTypeData(NetworkIdentifier const&)const;
    void operator==(NetworkIdentifier const&)const;
//  void _init(sockaddr_in6 const&); //TODO: incomplete function definition
//  bool isType(NetworkIdentifier::Type)const; //TODO: incomplete function definition
    NetworkIdentifier();
};
