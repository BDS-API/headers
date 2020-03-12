#pragma once

#include "WorldTemplateManagerProxyCallbacks.h"
#include <string>


class WorldTemplateManagerProxy {

public:
    ~WorldTemplateManagerProxy();
    void findTemplateIndexWithName(std::string const&)const;
    WorldTemplateManagerProxy(WorldTemplateManagerProxyCallbacks const&);
};
