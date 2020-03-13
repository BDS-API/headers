#pragma once

#include <string>
#include <vector>


class ActorInfoRegistry {

public:
    void getActorInfo(unsigned int)const; // _ZNK17ActorInfoRegistry12getActorInfoEj
    void getActorInfoId(std::string const&)const; // _ZNK17ActorInfoRegistry14getActorInfoIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void registerActorInfo(ActorInfo const&); // _ZN17ActorInfoRegistry17registerActorInfoERK9ActorInfo
    void _digestInfoFromServer(std::vector<ActorInfo> const&); // _ZN17ActorInfoRegistry21_digestInfoFromServerERKSt6vectorI9ActorInfoSaIS1_EE
    void getActorInfoList()const; // _ZNK17ActorInfoRegistry16getActorInfoListEv
    void setSpawnEggAvailable(std::string, bool); // _ZN17ActorInfoRegistry20setSpawnEggAvailableENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    bool isSpawnEggAvailable(std::string); // _ZN17ActorInfoRegistry19isSpawnEggAvailableENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ActorInfoRegistry(); // _ZN17ActorInfoRegistryC2Ev
    ~ActorInfoRegistry(); // _ZN17ActorInfoRegistryD2Ev
};
