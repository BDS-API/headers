#pragma once

#include "../../../unmapped/RenderParams"
#include "../../../unmapped/HashedString"
#include "../../../json/Value"


class ActorAnimationController {

public:

    void addState(HashedString const&);
    ActorAnimationController(HashedString const&, std::string const&);
    void resolveTransitionStateIndices();
    void findStateIndex(std::string const&, bool, unsigned long)const;
    void updateActiveParticleState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void updateActiveSoundEffectState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void fireEvents(RenderParams &, ActorAnimationControllerPlayer &)const;
    void toJson(Json::Value &)const;
    void findState(std::string const&, bool, unsigned long);
};
