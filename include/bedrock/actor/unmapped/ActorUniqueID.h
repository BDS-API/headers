#pragma once

#include "../../../mce/UUID.h"
#include "./ActorUniqueID.h"


class ActorUniqueID {

public:
    static long INVALID_ID;


    ActorUniqueID();
    void operator!=(ActorUniqueID const&)const;
    ActorUniqueID(long);
    void operator==(ActorUniqueID const&)const;
    void fromClientId(unsigned long);
    void fromUUID(mce::UUID const&);
    bool isValid()const;
    void getHash()const;
    void operator<(ActorUniqueID const&)const;
};
