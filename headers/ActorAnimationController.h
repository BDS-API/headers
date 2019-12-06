#pragma once

class ActorAnimationController {

public:

    void addState(HashedString const&);
    void ActorAnimationController(HashedString const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void resolveTransitionStateIndices(void);
    void findStateIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, unsigned long)const;
    void updateActiveParticleState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void updateActiveSoundEffectState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void fireEvents(RenderParams &, ActorAnimationControllerPlayer &, StateTransitionEvent)const;
    void toJson(Json::Value &)const;
    void findState(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, unsigned long);
};
