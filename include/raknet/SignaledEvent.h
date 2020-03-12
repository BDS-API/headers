#pragma once



namespace RakNet {

    class SignaledEvent {

    public:
        void WaitOnEvent(int);
        void InitEvent();
        SignaledEvent();
        void CloseEvent();
        void SetEvent();
        ~SignaledEvent();
    };
}
