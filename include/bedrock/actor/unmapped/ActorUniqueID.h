#pragma once



class ActorUniqueID {

public:
    static long INVALID_ID;

    ActorUniqueID(); // _ZN13ActorUniqueIDC2Ev
    void operator!=(ActorUniqueID const&)const; // _ZNK13ActorUniqueIDneERKS_
    ActorUniqueID(long); // _ZN13ActorUniqueIDC2El
    void operator==(ActorUniqueID const&)const; // _ZNK13ActorUniqueIDeqERKS_
    void fromClientId(unsigned long); // _ZN13ActorUniqueID12fromClientIdEm
    void fromUUID(mce::UUID const&); // _ZN13ActorUniqueID8fromUUIDERKN3mce4UUIDE
    bool isValid()const; // _ZNK13ActorUniqueID7isValidEv
    void getHash()const; // _ZNK13ActorUniqueID7getHashEv
    void operator<(ActorUniqueID const&)const; // _ZNK13ActorUniqueIDltERKS_
};
