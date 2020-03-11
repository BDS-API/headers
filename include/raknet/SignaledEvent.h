#pragma once



namespace RakNet {

class SignaledEvent {

public:

    SignaledEvent();
    ~SignaledEvent();
    void InitEvent();
    void CloseEvent();
    void SetEvent();
    void WaitOnEvent(int);
};

}