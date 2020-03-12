#pragma once

#include <string>


namespace mce {

    class UUID {

    public:
        std::string asString()const;
        void operator!=(mce::UUID const&)const;
        void operator<(mce::UUID const&)const;
        bool isEmpty()const;
        void operator==(mce::UUID const&)const;
        void getLeastSignificantBits()const;
        void getHash()const;
        UUID(unsigned long, unsigned long);
        void getMostSignificantBits()const;
        void fromString(std::string const&);
        void seedFromString(std::string const&);
        UUID();
    };
}
