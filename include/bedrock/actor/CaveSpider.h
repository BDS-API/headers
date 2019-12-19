#pragma once

class CaveSpider : Spider {

public:
    virtual CaveSpider::~CaveSpider();
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &);
    virtual void getModelScale(void)const;
    virtual void getSpiderType(void)const;

    CaveSpider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
