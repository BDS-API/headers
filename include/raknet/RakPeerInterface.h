#pragma once



using namespace RakNet;

class RakPeerInterface {

public:
    virtual RakNet::RakPeerInterface::~RakPeerInterface()

    void GetInstance();
    void DestroyInstance(RakNet::RakPeerInterface*);
    void Get64BitUniqueRandomNumber();
    RakPeerInterface(void);
};
