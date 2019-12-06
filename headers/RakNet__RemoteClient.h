#pragma once

class RakNet::RemoteClient {

public:

    void SetActive(bool);
    void SendOrBuffer(char const**, unsigned int const*, int);
    void Recv(char *, int);
    void Send(char const*, unsigned int);
    void Reset(void);
    void RemoteClient(void);
};
