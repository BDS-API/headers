#pragma once



class ActorRuntimeID {

public:
    void operator!=(ActorRuntimeID const&)const; // _ZNK14ActorRuntimeIDneERKS_
    void operator==(ActorRuntimeID const&)const; // _ZNK14ActorRuntimeIDeqERKS_
    ActorRuntimeID(); // _ZN14ActorRuntimeIDC2Ev
    ActorRuntimeID(unsigned long); // _ZN14ActorRuntimeIDC2Em
    void getHash()const; // _ZNK14ActorRuntimeID7getHashEv
};
