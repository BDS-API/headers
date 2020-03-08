#pragma once



using namespace RakNet;

class SignaledEvent {

public:

    SignaledEvent(void);
    void InitEvent();
    void CloseEvent();
    void SetEvent();
    void WaitOnEvent(int);
};
