#pragma once

class ActorAnimationController {

public:

    void addState(HashedString const&);
    void ActorAnimationController(HashedString const&, std::string const&);
    void resolveTransitionStateIndices(void);
    void findStateIndex(std::string const&, bool, unsigned long)const;
    void updateActiveParticleState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void updateActiveSoundEffectState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void fireEvents(RenderParams &, ActorAnimationControllerPlayer &, StateTransitionEvent)const;
    void toJson(Json::Value &)const;
    void findState(std::string const&, bool, unsigned long);
};
