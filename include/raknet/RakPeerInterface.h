#pragma once

#include "./RakPeerInterface.h"


namespace RakNet {

class RakPeerInterface {

public:
    virtual ~RakPeerInterface();

    void GetInstance();
    void DestroyInstance(RakNet::RakPeerInterface *);
    void Get64BitUniqueRandomNumber();
    RakPeerInterface();
};

}