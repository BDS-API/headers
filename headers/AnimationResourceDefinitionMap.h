#pragma once

class AnimationResourceDefinitionMap {

public:

    void AnimationResourceDefinitionMap(void);
    bool isAnimationResourceDefinitionMapEmpty(void)const;
    void getAnimations(void);
    void getAnimations(void)const;
    void getAnimationControllers(void);
    void getAnimationControllers(void)const;
    void getAnimateScriptArray(void);
    void getAnimateScriptArray(void)const;
    void mergeAnimation(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ActorSkeletalAnimationPtr);
    void mergeAnimationController(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ActorAnimationControllerPtr);
    void mergeActorAnimateScriptArray(std::vector<std::pair<HashedString, ExpressionNode>, std::allocator<std::pair<HashedString, ExpressionNode>>> const&);
    void removeActorAnimateScript(HashedString const&);
};
