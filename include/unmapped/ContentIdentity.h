#pragma once

#include "../mce/UUID.h"
#include <string>


class ContentIdentity {

public:
    static long EMPTY;

    ContentIdentity(ContentIdentity const&);
    void fromString(std::string const&);
    ContentIdentity(mce::UUID const&);
    std::string asString()const;
    ContentIdentity(ContentIdentity &&);
    void getAsUUID()const;
    bool isValid()const;
    void setUUID(mce::UUID const&);
    void operator<(ContentIdentity const&)const;
    void operator!=(ContentIdentity const&)const;
    void _setValidFlag();
    ContentIdentity();
    void operator==(ContentIdentity const&)const;
};
