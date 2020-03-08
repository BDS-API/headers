#pragma once

#include "../bedrock/pack/ResourcePackManager"


class VanillaWorldSystems {

public:

    void init(ResourcePackManager *, BlockDefinitionGroup *);
    void shutdown(void);
};
