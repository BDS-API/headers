#pragma once

#include "../bedrock/actor/unmapped/ActorAnimationPlayer.h"
#include <unordered_map>


class DefaultEmptyActorAnimationPlayer : ActorAnimationPlayer {

public:
    virtual bool hasAnimationFinished()const;
    virtual void findAnimation(HashedString const&);
    ~DefaultEmptyActorAnimationPlayer();
    virtual void resetAnimation();
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float);
    virtual void getAnimationType()const;
    DefaultEmptyActorAnimationPlayer();
};
