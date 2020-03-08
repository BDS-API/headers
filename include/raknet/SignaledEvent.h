#pragma once



using namespace RakNet;

class SignaledEvent {

public:

    SignaledEvent(void);
    void InitEvent(void);
    void CloseEvent(void);
    void SetEvent(void);
    void WaitOnEvent(int);
};
