#pragma once



class WSAStartupSingleton {

public:
    static long refCount;

    WSAStartupSingleton(); // _ZN19WSAStartupSingletonC2Ev
    ~WSAStartupSingleton(); // _ZN19WSAStartupSingletonD2Ev
    void AddRef(); // _ZN19WSAStartupSingleton6AddRefEv
    void Deref(); // _ZN19WSAStartupSingleton5DerefEv
};
