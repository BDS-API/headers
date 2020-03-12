#pragma once



namespace RakNet {

    class SimpleMutex {

    public:
        SimpleMutex();
        ~SimpleMutex();
        void Init();
        void Unlock();
        void Lock();
    };
}
