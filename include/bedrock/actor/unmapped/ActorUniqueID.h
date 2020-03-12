#pragma once

#include "../../../mce/UUID.h"


class ActorUniqueID {

public:
    static long INVALID_ID;

    ActorUniqueID();
    ActorUniqueID(long);
    void operator!=(ActorUniqueID const&)const;
    void operator==(ActorUniqueID const&)const;
    void fromUUID(mce::UUID const&);
    void getHash()const;
    void operator<(ActorUniqueID const&)const;
    void fromClientId(unsigned long);
    bool isValid()const;
};
