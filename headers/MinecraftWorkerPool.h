#pragma once

class MinecraftWorkerPool {

public:
    static long MinecraftWorkerPool::ASYNC;
    static long MinecraftWorkerPool::DISK;
    static long MinecraftWorkerPool::NETWORK;
    static long MinecraftWorkerPool::RENDERING;
    static long MinecraftWorkerPool::LEVELDB;
    static long MinecraftWorkerPool::CONNECTEDSTORAGE;
    static long MinecraftWorkerPool::WATCHDOG;


    void loadWorkerConfigurations(unsigned int, unsigned int);
    void initializeDefaults(void);
    void configureMainThread(void);
    void configureServerThread(void);
    void createSingletons(void);
    void destroySingletons(void);
};
