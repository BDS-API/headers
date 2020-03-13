#pragma once



namespace RakNet {

    class SimpleMutex {

    public:
        SimpleMutex(); // _ZN6RakNet11SimpleMutexC2Ev
        void Init(); // _ZN6RakNet11SimpleMutex4InitEv
        ~SimpleMutex(); // _ZN6RakNet11SimpleMutexD2Ev
        void Lock(); // _ZN6RakNet11SimpleMutex4LockEv
        void Unlock(); // _ZN6RakNet11SimpleMutex6UnlockEv
    };
}
