#pragma once

#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr"
#include "../bedrock/actor/unmapped/ActorAnimationControllerPtr"


class AnimationResourceDefinitionMap {

public:

    AnimationResourceDefinitionMap(void);
    bool isAnimationResourceDefinitionMapEmpty()const;
    void getAnimations();
    void getAnimations()const;
    void getAnimationControllers();
    void getAnimationControllers()const;
    void getAnimateScriptArray();
    void getAnimateScriptArray()const;
    void mergeAnimation(std::string const&, ActorSkeletalAnimationPtr);
    void mergeAnimationController(std::string const&, ActorAnimationControllerPtr);
    void mergeActorAnimateScriptArray(std::vector<std::pair<HashedString, ExpressionNode>, std::allocator<std::pair<HashedString, ExpressionNode>>> const&);
    void removeActorAnimateScript(HashedString const&);
};
