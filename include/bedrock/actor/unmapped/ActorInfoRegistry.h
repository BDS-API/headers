#pragma once



class ActorInfoRegistry {

public:

    void getActorInfo(unsigned int)const;
    void getActorInfoId(std::string const&)const;
    void registerActorInfo(ActorInfo const&);
    void _digestInfoFromServer(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
    void getActorInfoList()const;
    void setSpawnEggAvailable(std::string, bool);
    bool isSpawnEggAvailable(std::string);
    ActorInfoRegistry(void);
};
