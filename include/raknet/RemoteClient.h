#pragma once



namespace RakNet {

    class RemoteClient {

    public:
        void Recv(char *, int);
        void Send(char const*, unsigned int);
        void Reset();
        void SetActive(bool);
        ~RemoteClient();
        RemoteClient();
        void SendOrBuffer(char const**, unsigned int const*, int);
    };
}
