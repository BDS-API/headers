#pragma once

using namespace RakNet;

class RakPeerInterface {

public:
    virtual void RakNet::RakPeerInterface::~RakPeerInterface();

    void GetInstance(void);
    void DestroyInstance(RakNet::RakPeerInterface*);
    void Get64BitUniqueRandomNumber(void);
    RakPeerInterface(void);
};
