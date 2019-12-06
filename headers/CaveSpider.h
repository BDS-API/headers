#pragma once

class CaveSpider : Spider {

public:
    virtual ~CaveSpider();
    virtual void getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &);
    virtual void getModelScale(void)const;
    virtual void getSpiderType(void)const;

    void CaveSpider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
