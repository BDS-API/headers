#pragma once



class ActorRuntimeID {

public:
    void operator!=(ActorRuntimeID const&)const;
    void getHash()const;
    void operator==(ActorRuntimeID const&)const;
    ActorRuntimeID();
    ActorRuntimeID(unsigned long);
};
