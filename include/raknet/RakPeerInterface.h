#pragma once



using namespace RakNet;

class RakPeerInterface {

public:
    RakNet::RakPeerInterface::~RakPeerInterface()

    void GetInstance();
    void DestroyInstance(RakNet::RakPeerInterface*);
    void Get64BitUniqueRandomNumber();
    RakPeerInterface(void);
};
