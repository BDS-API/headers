#pragma once

class Interaction {

public:

    void setCooldown(float const&);
    void setTransformItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setParticleType(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addLevelSoundEventByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addActorDefinitionIdentifierByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void Interaction(void);
    void Interaction(Interaction const&);
};
