#pragma once



namespace RakNet {

    class AddressOrGUID {

    public:
        void ToString(bool)const;
        void ToInteger(RakNet::AddressOrGUID const&);
        AddressOrGUID(RakNet::RakNetGUID const&);
        AddressOrGUID(RakNet::Packet *);
        AddressOrGUID(RakNet::AddressOrGUID const&);
        AddressOrGUID();
        void ToString(bool, char *)const;
        AddressOrGUID(RakNet::SystemAddress const&);
        bool IsUndefined()const;
    };
}
