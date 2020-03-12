#pragma once



namespace RakNet {

    class RemoteClient {

    public:
        RemoteClient();
        void SetActive(bool);
        void SendOrBuffer(char const**, unsigned int const*, int);
        void Recv(char *, int);
        void Reset();
        ~RemoteClient();
        void Send(char const*, unsigned int);
    };
}
