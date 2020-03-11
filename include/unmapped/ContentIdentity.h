#pragma once

#include "../mce/UUID.h"
#include "./ContentIdentity.h"
#include <string>


class ContentIdentity {

public:
    static long EMPTY;


    ContentIdentity(mce::UUID const&);
    void _setValidFlag();
    ContentIdentity();
    ContentIdentity(ContentIdentity const&);
    ContentIdentity(ContentIdentity &&);
    void getAsUUID()const;
    void setUUID(mce::UUID const&);
    std::string asString()const;
    bool isValid()const;
    void operator==(ContentIdentity const&)const;
    void operator!=(ContentIdentity const&)const;
    void operator<(ContentIdentity const&)const;
    void fromString(std::string const&);
};
