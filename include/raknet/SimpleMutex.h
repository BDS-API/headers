#pragma once



namespace RakNet {

class SimpleMutex {

public:

    SimpleMutex();
    void Init();
    ~SimpleMutex();
    void Lock();
    void Unlock();
};

}