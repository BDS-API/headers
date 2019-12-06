#pragma once

class RakNet::AddressOrGUID {

public:

    void AddressOrGUID(RakNet::RakNetGUID const&);
    void AddressOrGUID(RakNet::SystemAddress const&);
    void AddressOrGUID(RakNet::Packet *);
    void ToInteger(RakNet::AddressOrGUID const&);
    void ToString(bool)const;
    void ToString(bool, char *)const;
    void IsUndefined(void)const;
    void AddressOrGUID(RakNet::AddressOrGUID const&);
    void AddressOrGUID(void);
};
