#pragma once

#include <string>
#include <vector>


class ActorInfoRegistry {

public:
    ~ActorInfoRegistry();
    ActorInfoRegistry();
    void getActorInfoList()const;
    void registerActorInfo(ActorInfo const&);
    void _digestInfoFromServer(std::vector<ActorInfo> const&);
    void getActorInfoId(std::string const&)const;
    void setSpawnEggAvailable(std::string, bool);
    void getActorInfo(unsigned int)const;
    bool isSpawnEggAvailable(std::string);
};
