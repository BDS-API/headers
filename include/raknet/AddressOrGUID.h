#pragma once

#include "./AddressOrGUID.h"
#include "./RakNetGUID.h"
#include "./SystemAddress.h"
#include "./Packet.h"


namespace RakNet {

class AddressOrGUID {

public:

    AddressOrGUID(RakNet::RakNetGUID const&);
    AddressOrGUID(RakNet::SystemAddress const&);
    AddressOrGUID(RakNet::Packet *);
    void ToInteger(RakNet::AddressOrGUID const&);
    void ToString(bool)const;
    void ToString(bool, char *)const;
    bool IsUndefined()const;
    AddressOrGUID(RakNet::AddressOrGUID const&);
    AddressOrGUID();
};

}