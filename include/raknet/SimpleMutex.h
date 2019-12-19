#pragma once

using namespace RakNet;

class SimpleMutex {

public:

    SimpleMutex(void);
    void Init(void);
    void Lock(void);
    void Unlock(void);
};
