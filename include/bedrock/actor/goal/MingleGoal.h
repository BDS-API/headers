#pragma once

#include "../Mob"
#include "../Actor"
#include "../unmapped/ActorUniqueID"
#include "../unmapped/ActorDefinitionIdentifier"
#include "../../../unmapped/MingleComponent"


class MingleGoal : MoveToPOIGoal {

public:
    static long FIND_PARTNER_INTERVAL_TICKS;
    static long SPEAK_INTERVAL_TICKS_MIN;
    static long SPEAK_INTERVAL_TICKS_MAX;

    virtual MingleGoal::~MingleGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    MingleGoal(Mob &, float, float, float, ActorDefinitionIdentifier, float);
    void _getMingleComponent()const;
    void _validatePartnerState(MingleComponent::MingleState, MingleComponent&, bool);
    void _pickNewSpeakInterval();
    void _resetPartnerState(Actor &);
    void _tickUnavailable(MingleComponent &);
    void _tickAvailable(MingleComponent &);
    void _tickPartneredActive(MingleComponent &);
    void _tickPartneredPassive(MingleComponent &);
    void _tickMingling(MingleComponent &);
    void _findNewPartner(ActorUniqueID);
    void _isWithinInteractRange(Actor &)const;
    void _tryGetMingleComponent(Actor &);
    void _lookAt(Actor *);
    void _canSearchForPartner()const;
    void _isSuitablePartner(Actor &, ActorUniqueID);
    void _tryPathToPartner(Actor &);
    void _isSuitableAgePartner(Actor const&);
    void _partnerWith(Actor &);
    void _getDistSqTo(Actor &)const;
};
