#pragma once

#include "../../pack/ResourcePackManager"


class WorldSystems {

public:
    static long mInitialized;


    void init(ResourcePackManager *);
    void shutdown();
};
