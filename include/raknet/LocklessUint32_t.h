#pragma once



namespace RakNet {

    class LocklessUint32_t {

    public:
        void Decrement();
        void GetValue()const;
        LocklessUint32_t(unsigned int);
        void Increment();
        LocklessUint32_t();
    };
}
