#pragma once

#include "../../../mce/UUID"


class ActorUniqueID {

public:
    static long INVALID_ID;


    ActorUniqueID(void);
    ActorUniqueID(long);
    void fromClientId(unsigned long);
    void fromUUID(mce::UUID const&);
    bool isValid()const;
    void getHash()const;
};
