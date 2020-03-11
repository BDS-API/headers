#pragma once

#include "./RakNetGUID.h"


namespace RakNet {

class RakNetGUID {

public:

    void operator!=(RakNet::RakNetGUID const&)const;
    void ToUint32(RakNet::RakNetGUID const&);
    void ToString()const;
    void ToString(char *)const;
    RakNetGUID();
    void operator==(RakNet::RakNetGUID const&)const;
    void operator>(RakNet::RakNetGUID const&)const;
    void operator<(RakNet::RakNetGUID const&)const;
    void FromString(char const*);
    RakNetGUID(unsigned long);
    void size();
};

}