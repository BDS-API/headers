#pragma once

#include <string>


class WorldTemplateManagerProxy {

public:
    WorldTemplateManagerProxy(WorldTemplateManagerProxyCallbacks const&); // _ZN25WorldTemplateManagerProxyC2ERK34WorldTemplateManagerProxyCallbacks
    ~WorldTemplateManagerProxy(); // _ZN25WorldTemplateManagerProxyD2Ev
    void findTemplateIndexWithName(std::string const&)const; // _ZNK25WorldTemplateManagerProxy25findTemplateIndexWithNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
