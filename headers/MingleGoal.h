#pragma once

class MingleGoal : MoveToPOIGoal {

public:
    static long MingleGoal::FIND_PARTNER_INTERVAL_TICKS;
    static long MingleGoal::SPEAK_INTERVAL_TICKS_MIN;
    static long MingleGoal::SPEAK_INTERVAL_TICKS_MAX;

    virtual ~MingleGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void MingleGoal(Mob &, float, float, float, ActorDefinitionIdentifier, float);
    void _getMingleComponent(void)const;
    void _validatePartnerState(MingleComponent::MingleState, MingleComponent&, bool);
    void _pickNewSpeakInterval(void);
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
    void _canSearchForPartner(void)const;
    void _isSuitablePartner(Actor &, ActorUniqueID);
    void _tryPathToPartner(Actor &);
    void _isSuitableAgePartner(Actor const&);
    void _partnerWith(Actor &);
    void _getDistSqTo(Actor &)const;
};
