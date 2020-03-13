#pragma once



namespace RakNet {

    class RemoteClient {

    public:
        void SetActive(bool); // _ZN6RakNet12RemoteClient9SetActiveEb
        void SendOrBuffer(char const**, unsigned int const*, int); // _ZN6RakNet12RemoteClient12SendOrBufferEPPKcPKji
        void Recv(char *, int); // _ZN6RakNet12RemoteClient4RecvEPci
        void Send(char const*, unsigned int); // _ZN6RakNet12RemoteClient4SendEPKcj
        void Reset(); // _ZN6RakNet12RemoteClient5ResetEv
        ~RemoteClient(); // _ZN6RakNet12RemoteClientD2Ev
        RemoteClient(); // _ZN6RakNet12RemoteClientC2Ev
    };
}
