#pragma once

#include "./UUID.h"
#include <string>


namespace mce {

class UUID {

public:

    UUID();
    void operator!=(mce::UUID const&)const;
    void operator==(mce::UUID const&)const;
    void getMostSignificantBits()const;
    void getLeastSignificantBits()const;
    void getHash()const;
    UUID(unsigned long, unsigned long);
    void operator<(mce::UUID const&)const;
    void fromString(std::string const&);
    void seedFromString(std::string const&);
    std::string asString()const;
    bool isEmpty()const;
};

}