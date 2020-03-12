#pragma once



namespace MinecraftWorkerPool {

    static long ASYNC;
    static long DISK;
    static long NETWORK;
    static long RENDERING;
    static long LEVELDB;
    static long LEVELDB_COMPACTION;
    static long CONNECTEDSTORAGE;
    static long WATCHDOG;

    void loadWorkerConfigurations(unsigned int, unsigned int);
    void createSingletons();
    void initializeDefaults();
    void configureServerThread();
    void configureMainThread();
    void destroySingletons();
};
