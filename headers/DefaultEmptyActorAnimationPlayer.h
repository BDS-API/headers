#pragma once

class DefaultEmptyActorAnimationPlayer : ActorAnimationPlayer {

public:
    virtual ~DefaultEmptyActorAnimationPlayer();
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float);
    virtual void resetAnimation(void);
    virtual bool hasAnimationFinished(void)const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType(void)const;

    void DefaultEmptyActorAnimationPlayer(void);
};
