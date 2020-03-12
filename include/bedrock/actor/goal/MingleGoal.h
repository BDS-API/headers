#pragma once

#include "../../../unmapped/MingleComponent.h"
#include "MoveToPOIGoal.h"
#include <string>
#include "../unmapped/ActorUniqueID.h"
#include "../Actor.h"
#include "../Mob.h"
#include "../unmapped/ActorDefinitionIdentifier.h"


class MingleGoal : MoveToPOIGoal {

public:
    static long FIND_PARTNER_INTERVAL_TICKS;
    static long SPEAK_INTERVAL_TICKS_MIN;
    static long SPEAK_INTERVAL_TICKS_MAX;

    ~MingleGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void start();
    virtual void stop();
    void _isWithinInteractRange(Actor &)const;
    void _tickUnavailable(MingleComponent &);
    void _tryGetMingleComponent(Actor &);
    void _tickPartneredActive(MingleComponent &);
    void _resetPartnerState(Actor &);
    MingleGoal(Mob &, float, float, float, ActorDefinitionIdentifier, float);
    void _tickAvailable(MingleComponent &);
    void _partnerWith(Actor &);
    void _tickPartneredPassive(MingleComponent &);
    void _pickNewSpeakInterval();
    void _tryPathToPartner(Actor &);
    void _isSuitablePartner(Actor &, ActorUniqueID);
    void _findNewPartner(ActorUniqueID);
    void _getMingleComponent()const;
//  void _validatePartnerState(MingleComponent::MingleState, MingleComponent &, bool); //TODO: incomplete function definition
    void _lookAt(Actor *);
    void _tickMingling(MingleComponent &);
    void _canSearchForPartner()const;
    void _getDistSqTo(Actor &)const;
    void _isSuitableAgePartner(Actor const&);
};
