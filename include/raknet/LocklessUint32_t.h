#pragma once



namespace RakNet {

    class LocklessUint32_t {

    public:
        LocklessUint32_t(unsigned int);
        LocklessUint32_t();
        void Decrement();
        void GetValue()const;
        void Increment();
    };
}
