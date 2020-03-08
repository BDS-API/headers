#pragma once



using namespace RakNet;

class AddressOrGUID {

public:

    AddressOrGUID(RakNet::RakNetGUID const&);
    AddressOrGUID(RakNet::SystemAddress const&);
    AddressOrGUID(RakNet::Packet *);
    void ToInteger(RakNet::AddressOrGUID const&);
    void ToString(bool)const;
    void ToString(bool, char *)const;
    void IsUndefined()const;
    AddressOrGUID(RakNet::AddressOrGUID const&);
    AddressOrGUID(void);
};
