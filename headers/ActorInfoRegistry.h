#pragma once

class ActorInfoRegistry {

public:

    void getActorInfo(unsigned int)const;
    void getActorInfoId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void registerActorInfo(ActorInfo const&);
    void _digestInfoFromServer(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
    void getActorInfoList(void)const;
    void setSpawnEggAvailable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool);
    bool isSpawnEggAvailable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void ActorInfoRegistry(void);
};
