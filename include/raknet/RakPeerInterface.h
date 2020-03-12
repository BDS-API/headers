#pragma once



namespace RakNet {

    class RakPeerInterface {

    public:
        ~RakPeerInterface();
        RakPeerInterface();
        void Get64BitUniqueRandomNumber();
        void GetInstance();
        void DestroyInstance(RakNet::RakPeerInterface *);
    };
}
