#pragma once

#include "Spider.h"
#include <vector>


class CaveSpider : Spider {

public:
    virtual void getSpiderType()const;
    virtual void getDebugText(std::vector<std::string> &);
    ~CaveSpider();
    virtual void getModelScale()const;
    CaveSpider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
