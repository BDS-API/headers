#pragma once

class WSAStartupSingleton {

public:
    static long refCount;


    void WSAStartupSingleton(void);
    void AddRef(void);
    void Deref(void);
};
