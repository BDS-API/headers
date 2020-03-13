#pragma once



namespace RakNet {

    class SignaledEvent {

    public:
        SignaledEvent(); // _ZN6RakNet13SignaledEventC2Ev
        ~SignaledEvent(); // _ZN6RakNet13SignaledEventD2Ev
        void InitEvent(); // _ZN6RakNet13SignaledEvent9InitEventEv
        void CloseEvent(); // _ZN6RakNet13SignaledEvent10CloseEventEv
        void SetEvent(); // _ZN6RakNet13SignaledEvent8SetEventEv
        void WaitOnEvent(int); // _ZN6RakNet13SignaledEvent11WaitOnEventEi
    };
}
