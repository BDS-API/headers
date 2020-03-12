#pragma once

#include "SystemAddress.h"
#include "RakNetGUID.h"
#include "Packet.h"


namespace RakNet {

    class AddressOrGUID {

    public:
        void ToString(bool, char *)const;
        void ToInteger(RakNet::AddressOrGUID const&);
        bool IsUndefined()const;
        AddressOrGUID(RakNet::RakNetGUID const&);
        AddressOrGUID();
        AddressOrGUID(RakNet::Packet *);
        AddressOrGUID(RakNet::AddressOrGUID const&);
        void ToString(bool)const;
        AddressOrGUID(RakNet::SystemAddress const&);
    };
}
