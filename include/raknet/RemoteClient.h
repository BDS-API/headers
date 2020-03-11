#pragma once



namespace RakNet {

class RemoteClient {

public:

    void SetActive(bool);
    void SendOrBuffer(char const**, unsigned int const*, int);
    void Recv(char *, int);
    void Send(char const*, unsigned int);
    void Reset();
    ~RemoteClient();
    RemoteClient();
};

}