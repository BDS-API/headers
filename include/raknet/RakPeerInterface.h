#pragma once



namespace RakNet {

    class RakPeerInterface {

    public:
        ~RakPeerInterface();
        void GetInstance();
        void Get64BitUniqueRandomNumber();
        RakPeerInterface();
        void DestroyInstance(RakNet::RakPeerInterface *);
    };
}
