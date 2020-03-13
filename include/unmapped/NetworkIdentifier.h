#pragma once

#include <string>


class NetworkIdentifier {

public:
    void operator==(NetworkIdentifier const&)const; // _ZNK17NetworkIdentifiereqERKS_
//  bool isType(NetworkIdentifier::Type)const; //TODO: incomplete function definition // _ZNK17NetworkIdentifier6isTypeENS_4TypeE
    NetworkIdentifier(); // _ZN17NetworkIdentifierC2Ev
    void getRakNetGUID()const; // _ZNK17NetworkIdentifier13getRakNetGUIDEv
    NetworkIdentifier(RakNet::RakNetGUID const&); // _ZN17NetworkIdentifierC2ERKN6RakNet10RakNetGUIDE
    void _init(RakNet::RakNetGUID const&); // _ZN17NetworkIdentifier5_initERKN6RakNet10RakNetGUIDE
    NetworkIdentifier(RakNet::SystemAddress const&); // _ZN17NetworkIdentifierC2ERKN6RakNet13SystemAddressE
    void _init(RakNet::SystemAddress const&); // _ZN17NetworkIdentifier5_initERKN6RakNet13SystemAddressE
    NetworkIdentifier(RakNet::AddressOrGUID const&); // _ZN17NetworkIdentifierC2ERKN6RakNet13AddressOrGUIDE
    NetworkIdentifier(std::string const&, unsigned short); // _ZN17NetworkIdentifierC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEt
//  void _init(sockaddr_in6 const&); //TODO: incomplete function definition // _ZN17NetworkIdentifier5_initERK12sockaddr_in6
//  void _init(sockaddr_in const&); //TODO: incomplete function definition // _ZN17NetworkIdentifier5_initERK11sockaddr_in
//  NetworkIdentifier(sockaddr_in const&); //TODO: incomplete function definition // _ZN17NetworkIdentifierC2ERK11sockaddr_in
//  NetworkIdentifier(sockaddr_in6 const&); //TODO: incomplete function definition // _ZN17NetworkIdentifierC2ERK12sockaddr_in6
    void getHash()const; // _ZNK17NetworkIdentifier7getHashEv
    std::string toString()const; // _ZNK17NetworkIdentifier8toStringB5cxx11Ev
    std::string getAddress()const; // _ZNK17NetworkIdentifier10getAddressB5cxx11Ev
    void getPort()const; // _ZNK17NetworkIdentifier7getPortEv
    bool equalsTypeData(NetworkIdentifier const&)const; // _ZNK17NetworkIdentifier14equalsTypeDataERKS_
    void getSocketAddress()const; // _ZNK17NetworkIdentifier16getSocketAddressEv
    void getSocketAddress6()const; // _ZNK17NetworkIdentifier17getSocketAddress6Ev
    bool isUnassigned()const; // _ZNK17NetworkIdentifier12isUnassignedEv
};
