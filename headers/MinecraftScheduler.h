#pragma once

class MinecraftScheduler {

public:
    static long MinecraftScheduler::mInstance;


    void client(void);
    void destroyClientSingleton(void);
};
