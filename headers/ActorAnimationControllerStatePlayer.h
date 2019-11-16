#pragma once

class ActorAnimationControllerStatePlayer : ActorAnimationPlayer {

    virtual void ActorAnimationControllerStatePlayer::~ActorAnimationControllerStatePlayer();
    virtual void ActorAnimationControllerStatePlayer::~ActorAnimationControllerStatePlayer();
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float);
    virtual void resetAnimation(void);
    virtual void buildBoneToPartMapping(AnimationComponent &);
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);
    virtual void hasAnimationFinished(void)const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType(void)const;
}
