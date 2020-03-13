#pragma once



namespace RakNet {

    class RakNetGUID {

    public:
        void operator!=(RakNet::RakNetGUID const&)const; // _ZNK6RakNet10RakNetGUIDneERKS0_
        void ToUint32(RakNet::RakNetGUID const&); // _ZN6RakNet10RakNetGUID8ToUint32ERKS0_
        void ToString()const; // _ZNK6RakNet10RakNetGUID8ToStringEv
        void ToString(char *)const; // _ZNK6RakNet10RakNetGUID8ToStringEPc
        RakNetGUID(); // _ZN6RakNet10RakNetGUIDC2Ev
        void operator==(RakNet::RakNetGUID const&)const; // _ZNK6RakNet10RakNetGUIDeqERKS0_
        void operator>(RakNet::RakNetGUID const&)const; // _ZNK6RakNet10RakNetGUIDgtERKS0_
        void operator<(RakNet::RakNetGUID const&)const; // _ZNK6RakNet10RakNetGUIDltERKS0_
        void FromString(char const*); // _ZN6RakNet10RakNetGUID10FromStringEPKc
        RakNetGUID(unsigned long); // _ZN6RakNet10RakNetGUIDC2Em
        void size(); // _ZN6RakNet10RakNetGUID4sizeEv
    };
}
