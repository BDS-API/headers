#pragma once

#include "./ActorRuntimeID.h"


class ActorRuntimeID {

public:

    void operator!=(ActorRuntimeID const&)const;
    void operator==(ActorRuntimeID const&)const;
    ActorRuntimeID();
    ActorRuntimeID(unsigned long);
    void getHash()const;
};
