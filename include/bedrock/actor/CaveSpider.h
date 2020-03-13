#pragma once

#include <vector>
#include "Spider.h"


class CaveSpider : Spider {

public:
    ~CaveSpider(); // _ZN10CaveSpiderD2Ev
    virtual void getDebugText(std::vector<std::string> &); // _ZN10CaveSpider12getDebugTextERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    virtual void getModelScale()const; // _ZNK10CaveSpider13getModelScaleEv
    virtual void getSpiderType()const; // _ZNK10CaveSpider13getSpiderTypeEv
    CaveSpider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN10CaveSpiderC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
