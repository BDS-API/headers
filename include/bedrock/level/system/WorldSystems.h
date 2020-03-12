#pragma once

#include "../../pack/ResourcePackManager.h"


namespace WorldSystems {

    static long mInitialized;

    void init(ResourcePackManager *);
    void shutdown();
};
