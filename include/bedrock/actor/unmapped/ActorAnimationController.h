#pragma once

#include <string>


class ActorAnimationController {

public:
    void updateActiveParticleState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void updateActiveSoundEffectState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const;
    void addState(HashedString const&);
    std::string getSourceFilePathWithExtension()const;
    void toJson(Json::Value &)const;
    ActorAnimationController(HashedString const&, std::string const&);
    ~ActorAnimationController();
    void findState(std::string const&, bool, unsigned long);
    void resolveTransitionStateIndices();
    void fireEvents(RenderParams &, ActorAnimationControllerPlayer &)const;
    void findStateIndex(std::string const&, bool, unsigned long)const;
};
