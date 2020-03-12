#pragma once



namespace RakNet {

    class SimpleMutex {

    public:
        void Init();
        void Unlock();
        SimpleMutex();
        void Lock();
        ~SimpleMutex();
    };
}
