#pragma once

#include "./WorldTemplateManagerProxyCallbacks.h"
#include <string>


class WorldTemplateManagerProxy {

public:

    WorldTemplateManagerProxy(WorldTemplateManagerProxyCallbacks const&);
    ~WorldTemplateManagerProxy();
    void findTemplateIndexWithName(std::string const&)const;
};
