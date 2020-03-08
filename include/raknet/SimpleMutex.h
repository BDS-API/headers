#pragma once



using namespace RakNet;

class SimpleMutex {

public:

    SimpleMutex(void);
    void Init();
    void Lock();
    void Unlock();
};
