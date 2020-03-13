#pragma once



namespace RakNet {

    class LocklessUint32_t {

    public:
        void GetValue()const; // _ZNK6RakNet16LocklessUint32_t8GetValueEv
        LocklessUint32_t(); // _ZN6RakNet16LocklessUint32_tC2Ev
        LocklessUint32_t(unsigned int); // _ZN6RakNet16LocklessUint32_tC2Ej
        void Increment(); // _ZN6RakNet16LocklessUint32_t9IncrementEv
        void Decrement(); // _ZN6RakNet16LocklessUint32_t9DecrementEv
    };
}
