#pragma once

#include "../bedrock/pack/ResourcePackManager"


class WorldSystems {

public:
    static long mInitialized;


    void init(ResourcePackManager *);
    void shutdown(void);
};
