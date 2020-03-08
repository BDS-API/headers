#pragma once



using namespace RakNet;

class RakNetGUID {

public:

    void ToUint32(RakNet::RakNetGUID const&);
    void ToString()const;
    void ToString(char *)const;
    RakNetGUID(void);
    void FromString(char const*);
    RakNetGUID(unsigned long);
    void size();
};
