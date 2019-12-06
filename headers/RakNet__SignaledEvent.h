#pragma once

class RakNet::SignaledEvent {

public:

    void SignaledEvent(void);
    void InitEvent(void);
    void CloseEvent(void);
    void SetEvent(void);
    void WaitOnEvent(int);
};
