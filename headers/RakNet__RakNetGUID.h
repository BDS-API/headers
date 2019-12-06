#pragma once

class RakNet::RakNetGUID {

public:

    void ToUint32(RakNet::RakNetGUID const&);
    void ToString(void)const;
    void ToString(char *)const;
    void RakNetGUID(void);
    void FromString(char const*);
    void RakNetGUID(unsigned long);
    void size(void);
};
