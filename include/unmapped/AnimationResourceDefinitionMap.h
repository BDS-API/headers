#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr.h"
#include "../bedrock/actor/unmapped/ActorAnimationControllerPtr.h"
#include <vector>


class AnimationResourceDefinitionMap {

public:
    AnimationResourceDefinitionMap(); // _ZN30AnimationResourceDefinitionMapC2Ev
    ~AnimationResourceDefinitionMap(); // _ZN30AnimationResourceDefinitionMapD2Ev
    bool isAnimationResourceDefinitionMapEmpty()const; // _ZNK30AnimationResourceDefinitionMap37isAnimationResourceDefinitionMapEmptyEv
    void getAnimations(); // _ZN30AnimationResourceDefinitionMap13getAnimationsEv
    void getAnimations()const; // _ZNK30AnimationResourceDefinitionMap13getAnimationsEv
    void getAnimationControllers(); // _ZN30AnimationResourceDefinitionMap23getAnimationControllersEv
    void getAnimationControllers()const; // _ZNK30AnimationResourceDefinitionMap23getAnimationControllersEv
    void getAnimateScriptArray(); // _ZN30AnimationResourceDefinitionMap21getAnimateScriptArrayEv
    void getAnimateScriptArray()const; // _ZNK30AnimationResourceDefinitionMap21getAnimateScriptArrayEv
    void mergeAnimation(std::string const&, ActorSkeletalAnimationPtr); // _ZN30AnimationResourceDefinitionMap14mergeAnimationERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE25ActorSkeletalAnimationPtr
    void mergeAnimationController(std::string const&, ActorAnimationControllerPtr); // _ZN30AnimationResourceDefinitionMap24mergeAnimationControllerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE27ActorAnimationControllerPtr
    void mergeActorAnimateScriptArray(std::vector<std::pair<HashedString, ExpressionNode>> const&); // _ZN30AnimationResourceDefinitionMap28mergeActorAnimateScriptArrayERKSt6vectorISt4pairI12HashedString14ExpressionNodeESaIS4_EE
    void removeActorAnimateScript(HashedString const&); // _ZN30AnimationResourceDefinitionMap24removeActorAnimateScriptERK12HashedString
};
