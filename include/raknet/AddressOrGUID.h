#pragma once



namespace RakNet {

    class AddressOrGUID {

    public:
        AddressOrGUID(RakNet::RakNetGUID const&); // _ZN6RakNet13AddressOrGUIDC2ERKNS_10RakNetGUIDE
        AddressOrGUID(RakNet::SystemAddress const&); // _ZN6RakNet13AddressOrGUIDC2ERKNS_13SystemAddressE
        AddressOrGUID(RakNet::Packet *); // _ZN6RakNet13AddressOrGUIDC2EPNS_6PacketE
        void ToInteger(RakNet::AddressOrGUID const&); // _ZN6RakNet13AddressOrGUID9ToIntegerERKS0_
        void ToString(bool)const; // _ZNK6RakNet13AddressOrGUID8ToStringEb
        void ToString(bool, char *)const; // _ZNK6RakNet13AddressOrGUID8ToStringEbPc
        bool IsUndefined()const; // _ZNK6RakNet13AddressOrGUID11IsUndefinedEv
        AddressOrGUID(RakNet::AddressOrGUID const&); // _ZN6RakNet13AddressOrGUIDC2ERKS0_
        AddressOrGUID(); // _ZN6RakNet13AddressOrGUIDC2Ev
    };
}
