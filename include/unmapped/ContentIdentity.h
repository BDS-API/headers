#pragma once

#include <string>


class ContentIdentity {

public:
    static long EMPTY;

    ContentIdentity(ContentIdentity const&);
    ContentIdentity(mce::UUID const&);
    std::string asString()const;
    void operator<(ContentIdentity const&)const;
    void operator!=(ContentIdentity const&)const;
    void _setValidFlag();
    void getAsUUID()const;
    void fromString(std::string const&);
    void setUUID(mce::UUID const&);
    ContentIdentity();
    bool isValid()const;
    void operator==(ContentIdentity const&)const;
    ContentIdentity(ContentIdentity &&);
};
