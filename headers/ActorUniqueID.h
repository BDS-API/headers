#pragma once

class ActorUniqueID {

public:
    static long ActorUniqueID::INVALID_ID;


    void ActorUniqueID(void);
    void ActorUniqueID(long);
    void fromClientId(unsigned long);
    void fromUUID(mce::UUID const&);
    bool isValid(void)const;
    void getHash(void)const;
};