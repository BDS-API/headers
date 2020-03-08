#pragma once

#include "../mce/UUID"


class ContentIdentity {

public:
    static long EMPTY;


    ContentIdentity(mce::UUID const&);
    void _setValidFlag();
    ContentIdentity(void);
    ContentIdentity(ContentIdentity const&);
    ContentIdentity(ContentIdentity&&);
    void getAsUUID()const;
    void setUUID(mce::UUID const&);
    bool isValid()const;
    void fromString(std::string const&);
};
