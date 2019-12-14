#pragma once

class CaveSpider : Spider {

public:
    virtual ~CaveSpider();
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &);
    virtual void getModelScale(void)const;
    virtual void getSpiderType(void)const;

    void CaveSpider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
