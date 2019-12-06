#pragma once

class RakNet::RakPeerInterface {

public:
    virtual ~RakPeerInterface();

    void GetInstance(void);
    void DestroyInstance(RakNet::RakPeerInterface*);
    void Get64BitUniqueRandomNumber(void);
    void RakPeerInterface(void);
};
