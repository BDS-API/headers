#pragma once

#include "../bedrock/actor/unmapped/ActorAnimationPlayer"


class DefaultEmptyActorAnimationPlayer : ActorAnimationPlayer {

public:
    virtual DefaultEmptyActorAnimationPlayer::~DefaultEmptyActorAnimationPlayer()
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float);
    virtual void resetAnimation();
    virtual bool hasAnimationFinished()const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType()const;

    DefaultEmptyActorAnimationPlayer(void);
};
