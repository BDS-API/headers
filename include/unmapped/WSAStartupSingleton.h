#pragma once



class WSAStartupSingleton {

public:
    static long refCount;

    ~WSAStartupSingleton();
    void Deref();
    WSAStartupSingleton();
    void AddRef();
};
