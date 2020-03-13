#pragma once

#include <string>


class MobSpawnHerdInfo {

public:
    ~MobSpawnHerdInfo(); // _ZN16MobSpawnHerdInfoD2Ev
    MobSpawnHerdInfo(MobSpawnHerdInfo const&); // _ZN16MobSpawnHerdInfoC2ERKS_
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int, std::string const&, unsigned int); // _ZN16MobSpawnHerdInfoC2EjjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjS7_j
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int); // _ZN16MobSpawnHerdInfoC2EjjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj
    MobSpawnHerdInfo(MobSpawnHerdInfo &&); // _ZN16MobSpawnHerdInfoC2EOS_
};
