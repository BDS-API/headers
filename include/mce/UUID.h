#pragma once



using namespace mce;

class UUID {

public:

    UUID(void);
    void getMostSignificantBits()const;
    void getLeastSignificantBits()const;
    void getHash()const;
    UUID(unsigned long, unsigned long);
    void fromString(std::string const&);
    void seedFromString(std::string const&);
    bool isEmpty()const;
};
