#pragma once



using namespace RakNet;

class LocklessUint32_t {

public:

    void GetValue()const;
    LocklessUint32_t(void);
    LocklessUint32_t(unsigned int);
    void Increment();
    void Decrement();
};
