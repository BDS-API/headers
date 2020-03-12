#pragma once

#include <string>
#include "../unmapped/ActorDefinitionIdentifier.h"
#include "MoveToPOIGoal.h"
#include "../unmapped/ActorUniqueID.h"


class MingleGoal : MoveToPOIGoal {

public:
    static long FIND_PARTNER_INTERVAL_TICKS;
    static long SPEAK_INTERVAL_TICKS_MIN;
    static long SPEAK_INTERVAL_TICKS_MAX;

    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    ~MingleGoal();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual bool canUse();
    void _pickNewSpeakInterval();
    void _isSuitablePartner(Actor &, ActorUniqueID);
    void _tickUnavailable(MingleComponent &);
    void _isSuitableAgePartner(Actor const&);
    MingleGoal(Mob &, float, float, float, ActorDefinitionIdentifier, float);
    void _getMingleComponent()const;
    void _tickPartneredPassive(MingleComponent &);
    void _tickPartneredActive(MingleComponent &);
    void _tickAvailable(MingleComponent &);
    void _canSearchForPartner()const;
//  void _validatePartnerState(MingleComponent::MingleState, MingleComponent &, bool); //TODO: incomplete function definition
    void _getDistSqTo(Actor &)const;
    void _lookAt(Actor *);
    void _partnerWith(Actor &);
    void _tickMingling(MingleComponent &);
    void _resetPartnerState(Actor &);
    void _isWithinInteractRange(Actor &)const;
    void _tryPathToPartner(Actor &);
    void _findNewPartner(ActorUniqueID);
    void _tryGetMingleComponent(Actor &);
};
