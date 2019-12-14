#pragma once

class WorldTemplateManagerProxy {

public:

    void WorldTemplateManagerProxy(WorldTemplateManagerProxyCallbacks const&);
    void findTemplateIndexWithName(std::string const&)const;
};
