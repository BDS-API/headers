#pragma once



class WSAStartupSingleton {

public:
    static long refCount;

    void AddRef();
    ~WSAStartupSingleton();
    WSAStartupSingleton();
    void Deref();
};
