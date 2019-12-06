#pragma once

class MinecraftWorkerPool {

public:
    static long MinecraftWorkerPool::ASYNC;
    static long MinecraftWorkerPool::DISK;
    static long MinecraftWorkerPool::NETWORK;
    static long MinecraftWorkerPool::RENDERING;
    static long MinecraftWorkerPool::LEVELDB;
    static long MinecraftWorkerPool::CONNECTEDSTORAGE;


    void loadWorkerConfigurations(unsigned int, unsigned int);
    void configureMainThread(void);
    void configureServerThread(void);
    void createSingletons(void);
    void destroySingletons(void);
};
