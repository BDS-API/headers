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

    void loadWorkerConfigurations(unsigned int, unsigned int); // _ZN19MinecraftWorkerPool24loadWorkerConfigurationsEjj
    void initializeDefaults(); // _ZN19MinecraftWorkerPool18initializeDefaultsEv
    void configureMainThread(); // _ZN19MinecraftWorkerPool19configureMainThreadEv
    void configureServerThread(); // _ZN19MinecraftWorkerPool21configureServerThreadEv
    void createSingletons(); // _ZN19MinecraftWorkerPool16createSingletonsEv
    void destroySingletons(); // _ZN19MinecraftWorkerPool17destroySingletonsEv
};
