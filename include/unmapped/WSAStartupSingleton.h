#pragma once



class WSAStartupSingleton {

public:
    static long refCount;


    WSAStartupSingleton(void);
    void AddRef(void);
    void Deref(void);
};
