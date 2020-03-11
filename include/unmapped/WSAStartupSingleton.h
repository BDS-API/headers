#pragma once



class WSAStartupSingleton {

public:
    static long refCount;


    WSAStartupSingleton();
    ~WSAStartupSingleton();
    void AddRef();
    void Deref();
};
