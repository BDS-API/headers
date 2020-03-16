#pragma once



namespace RakNet {

    class RakPeerInterface {

    public:
        virtual ~RakPeerInterface(); // _ZN6RakNet16RakPeerInterfaceD2Ev
        virtual void __fake_function0(); // fake
        void GetInstance(); // _ZN6RakNet16RakPeerInterface11GetInstanceEv
        void DestroyInstance(RakNet::RakPeerInterface *); // _ZN6RakNet16RakPeerInterface15DestroyInstanceEPS0_
        void Get64BitUniqueRandomNumber(); // _ZN6RakNet16RakPeerInterface26Get64BitUniqueRandomNumberEv
        RakPeerInterface(); // _ZN6RakNet16RakPeerInterfaceC2Ev
    };
}
