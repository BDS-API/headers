#pragma once

#include "../../pack/ResourcePackManager.h"


class WorldSystems {

public:
    static long mInitialized;


    void init(ResourcePackManager *);
    void shutdown();
};
