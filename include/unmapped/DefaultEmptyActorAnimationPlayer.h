#pragma once

#include <unordered_map>
#include "../bedrock/actor/unmapped/ActorAnimationPlayer.h"


class DefaultEmptyActorAnimationPlayer : ActorAnimationPlayer {

public:
    ~DefaultEmptyActorAnimationPlayer(); // _ZN32DefaultEmptyActorAnimationPlayerD2Ev
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); // _ZN32DefaultEmptyActorAnimationPlayer11applyToPoseER12RenderParamsRSt13unordered_mapI22SkeletalHierarchyIndexSt6vectorI15BoneOrientationSaIS5_EESt4hashIS3_ESt8equal_toIS3_ESaISt4pairIKS3_S7_EEEf
    virtual void resetAnimation(); // _ZN32DefaultEmptyActorAnimationPlayer14resetAnimationEv
    virtual bool hasAnimationFinished()const; // _ZNK32DefaultEmptyActorAnimationPlayer20hasAnimationFinishedEv
    virtual void findAnimation(HashedString const&); // _ZN32DefaultEmptyActorAnimationPlayer13findAnimationERK12HashedString
    virtual void getAnimationType()const; // _ZNK32DefaultEmptyActorAnimationPlayer16getAnimationTypeEv
    DefaultEmptyActorAnimationPlayer(); // _ZN32DefaultEmptyActorAnimationPlayerC2Ev
};
