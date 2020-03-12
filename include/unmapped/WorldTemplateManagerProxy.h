#pragma once

#include <string>


class WorldTemplateManagerProxy {

public:
    void findTemplateIndexWithName(std::string const&)const;
    WorldTemplateManagerProxy(WorldTemplateManagerProxyCallbacks const&);
    ~WorldTemplateManagerProxy();
};
