#pragma once



class WorldTemplateManagerProxy {

public:

    WorldTemplateManagerProxy(WorldTemplateManagerProxyCallbacks const&);
    void findTemplateIndexWithName(std::string const&)const;
};
