#pragma once

class SpawnGroupData {

public:

    void SpawnGroupData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, MobSpawnRules &);
    void addSpawnRules(MobSpawnRules &);
    void getSpawnRules(void)const;
};
