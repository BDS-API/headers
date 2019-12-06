#pragma once

class RakNet::IRNS2_Berkley : RakNet::RakNetSocket2 {

public:
    virtual ~IRNS2_Berkley();

    void IsPortInUse(unsigned short, char const*, unsigned short, int);
    void IRNS2_Berkley(void);
};
