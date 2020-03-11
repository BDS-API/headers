#pragma once

#include "../../../unmapped/RenderParams.h"
#include "../../../unmapped/HashedString.h"
#include "../../../json/Value.h"
#include "./ActorAnimationControllerPlayer.h"
#include <string>


class ActorAnimationController {

public:

    ~ActorAnimationController();
    void addState(HashedString const&);
    ActorAnimationController(HashedString const&, std::string const&);
    void resolveTransitionStateIndices();
    void findStateIndex(std::string const&, bool, unsigned long)const;
    void updateActiveParticleState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void updateActiveSoundEffectState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void fireEvents(RenderParams &, ActorAnimationControllerPlayer &)const;
    std::string getSourceFilePathWithExtension()const;
    void toJson(Json::Value &)const;
    void findState(std::string const&, bool, unsigned long);
};
