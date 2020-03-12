#pragma once



class ActorRuntimeID {

public:
    void getHash()const;
    void operator!=(ActorRuntimeID const&)const;
    ActorRuntimeID();
    void operator==(ActorRuntimeID const&)const;
    ActorRuntimeID(unsigned long);
};
