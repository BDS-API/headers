#pragma once



using namespace RakNet;

class IRNS2_Berkley : RakNet::RakNetSocket2 {

public:
    virtual RakNet::IRNS2_Berkley::~IRNS2_Berkley()

    void IsPortInUse(unsigned short, char const*, unsigned short, int);
    IRNS2_Berkley(void);
};
