#pragma once



namespace RakNet {

    class SignaledEvent {

    public:
        void CloseEvent();
        void WaitOnEvent(int);
        void SetEvent();
        SignaledEvent();
        void InitEvent();
        ~SignaledEvent();
    };
}
