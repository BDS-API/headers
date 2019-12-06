#pragma once

class WorldSystems {

public:
    static long WorldSystems::mInitialized;


    void init(ResourcePackManager *);
    void shutdown(void);
};
