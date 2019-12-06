#pragma once

class WSAStartupSingleton {

public:
    static long WSAStartupSingleton::refCount;


    void WSAStartupSingleton(void);
    void AddRef(void);
    void Deref(void);
};
