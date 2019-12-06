#pragma once

class ActorSpawnRuleGroup : ActorSpawnRuleBase {

public:
    virtual ~ActorSpawnRuleGroup();
    virtual void processPopulationControl(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value &);
    virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);

    void ActorSpawnRuleGroup(ResourcePackManager &, IWorldRegistriesProvider &);
    void getActorSpawnPool(ActorDefinitionIdentifier const&)const;
    void getDelayEnd(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)const;
    void resetDelayEnd(MobSpawnRules, unsigned long, Random &);
    void offSetDelayByCurrentTick(Tick const&);
};
