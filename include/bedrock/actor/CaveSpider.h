#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class CaveSpider : Spider {

public:
    virtual CaveSpider::~CaveSpider()
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &);
    virtual void getModelScale()const;
    virtual void getSpiderType()const;

    CaveSpider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
