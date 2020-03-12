#pragma once



class ActorUniqueID {

public:
    static long INVALID_ID;

    ActorUniqueID(long);
    void fromClientId(unsigned long);
    void fromUUID(mce::UUID const&);
    void operator<(ActorUniqueID const&)const;
    ActorUniqueID();
    void operator!=(ActorUniqueID const&)const;
    bool isValid()const;
    void getHash()const;
    void operator==(ActorUniqueID const&)const;
};
