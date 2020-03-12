#pragma once

#include "ActorInfo.h"
#include <vector>
#include <string>


class ActorInfoRegistry {

public:
    void setSpawnEggAvailable(std::string, bool);
    ~ActorInfoRegistry();
    void getActorInfoList()const;
    void getActorInfoId(std::string const&)const;
    void getActorInfo(unsigned int)const;
    ActorInfoRegistry();
    void _digestInfoFromServer(std::vector<ActorInfo> const&);
    void registerActorInfo(ActorInfo const&);
    bool isSpawnEggAvailable(std::string);
};
