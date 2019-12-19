#pragma once

class WorldSystems {

public:
    static long mInitialized;


    void init(ResourcePackManager *);
    void shutdown(void);
};
