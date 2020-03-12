#pragma once

#include <string>
#include "../../../unmapped/RenderParams.h"
#include "ActorAnimationControllerPlayer.h"
#include "../../../unmapped/HashedString.h"
#include "../../../json/Value.h"


class ActorAnimationController {

public:
    ActorAnimationController(HashedString const&, std::string const&);
    void updateActiveParticleState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    ~ActorAnimationController();
    void addState(HashedString const&);
    void updateActiveSoundEffectState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void findState(std::string const&, bool, unsigned long);
    void toJson(Json::Value &)const;
    void resolveTransitionStateIndices();
    std::string getSourceFilePathWithExtension()const;
    void findStateIndex(std::string const&, bool, unsigned long)const;
    void fireEvents(RenderParams &, ActorAnimationControllerPlayer &)const;
};
