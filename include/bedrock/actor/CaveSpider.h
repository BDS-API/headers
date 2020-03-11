#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Spider.h"
#include <memory>
#include <vector>
#include "unmapped/ActorDefinitionGroup.h"
#include <string>


class CaveSpider : Spider {

public:
    virtual ~CaveSpider();
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &);
    virtual void getModelScale()const;
    virtual void getSpiderType()const;

    CaveSpider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
