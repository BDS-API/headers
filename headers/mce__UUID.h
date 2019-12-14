#pragma once

class mce::UUID {

public:

    void UUID(void);
    void getMostSignificantBits(void)const;
    void getLeastSignificantBits(void)const;
    void getHash(void)const;
    void UUID(unsigned long, unsigned long);
    void fromString(std::string const&);
    void seedFromString(std::string const&);
    bool isEmpty(void)const;
};
