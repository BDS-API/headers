#pragma once

class ActorSpawnRuleBase {

public:
    virtual ~ActorSpawnRuleBase();

    void ActorSpawnRuleBase(void);
    void _registerSpawnRules(std::function<void ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, BiomeFilterGroup &, MobSpawnRules &)>, MobSpawnRules const&, Json::Value &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _applySpawnCondition(std::function<void ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, BiomeFilterGroup &, MobSpawnRules &)>, Json::Value &, MobSpawnRules const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _readJsonHeader(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &&, std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    void _getResources(ResourcePackManager &, MobSpawnRules const&, std::function<void ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, BiomeFilterGroup &, MobSpawnRules&)>);
};
