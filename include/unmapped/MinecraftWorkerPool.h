#pragma once



class MinecraftWorkerPool {

public:
    static long ASYNC;
    static long DISK;
    static long NETWORK;
    static long RENDERING;
    static long LEVELDB;
    static long LEVELDB_COMPACTION;
    static long CONNECTEDSTORAGE;
    static long WATCHDOG;


    void loadWorkerConfigurations(unsigned int, unsigned int);
    void initializeDefaults(void);
    void configureMainThread(void);
    void configureServerThread(void);
    void createSingletons(void);
    void destroySingletons(void);
};
