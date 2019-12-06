#pragma once

class RakNet::LocklessUint32_t {

public:

    void GetValue(void)const;
    void LocklessUint32_t(void);
    void LocklessUint32_t(unsigned int);
    void Increment(void);
    void Decrement(void);
};
