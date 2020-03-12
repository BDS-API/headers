#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include <string>
#include "unmapped/ActorDefinitionIdentifier.h"
#include <vector>
#include "Spider.h"


class CaveSpider : Spider {

public:
    ~CaveSpider();
    virtual void getSpiderType()const;
    virtual void getDebugText(std::vector<std::string> &);
    virtual void getModelScale()const;
    CaveSpider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
