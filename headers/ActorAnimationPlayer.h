#pragma once

class ActorAnimationPlayer {

public:
    virtual ~ActorAnimationPlayer();
    virtual void buildBoneToPartMapping(AnimationComponent &);
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);

    void ActorAnimationPlayer(HashedString const&, ExpressionNode const&);
};
