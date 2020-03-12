#pragma once

#include <string>


namespace mce {

    class UUID {

    public:
        void operator<(mce::UUID const&)const;
        void getMostSignificantBits()const;
        void getLeastSignificantBits()const;
        void getHash()const;
        std::string asString()const;
        UUID(unsigned long, unsigned long);
        void operator==(mce::UUID const&)const;
        void fromString(std::string const&);
        bool isEmpty()const;
        void seedFromString(std::string const&);
        void operator!=(mce::UUID const&)const;
        UUID();
    };
}
