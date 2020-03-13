#pragma once

#include <string>
#include "../unmapped/ActorDefinitionIdentifier.h"
#include "../unmapped/ActorUniqueID.h"
#include "MoveToPOIGoal.h"


class MingleGoal : MoveToPOIGoal {

public:
    static long FIND_PARTNER_INTERVAL_TICKS;
    static long SPEAK_INTERVAL_TICKS_MIN;
    static long SPEAK_INTERVAL_TICKS_MAX;

    ~MingleGoal(); // _ZN10MingleGoalD2Ev
    virtual bool canUse(); // _ZN10MingleGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN10MingleGoal16canContinueToUseEv
    virtual void start(); // _ZN10MingleGoal5startEv
    virtual void stop(); // _ZN10MingleGoal4stopEv
    virtual void tick(); // _ZN10MingleGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK10MingleGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MingleGoal(Mob &, float, float, float, ActorDefinitionIdentifier, float); // _ZN10MingleGoalC2ER3Mobfff25ActorDefinitionIdentifierf
    void _getMingleComponent()const; // _ZNK10MingleGoal19_getMingleComponentEv
//  void _validatePartnerState(MingleComponent::MingleState, MingleComponent &, bool); //TODO: incomplete function definition // _ZN10MingleGoal21_validatePartnerStateEN15MingleComponent11MingleStateERS0_b
    void _pickNewSpeakInterval(); // _ZN10MingleGoal21_pickNewSpeakIntervalEv
    void _resetPartnerState(Actor &); // _ZN10MingleGoal18_resetPartnerStateER5Actor
    void _tickUnavailable(MingleComponent &); // _ZN10MingleGoal16_tickUnavailableER15MingleComponent
    void _tickAvailable(MingleComponent &); // _ZN10MingleGoal14_tickAvailableER15MingleComponent
    void _tickPartneredActive(MingleComponent &); // _ZN10MingleGoal20_tickPartneredActiveER15MingleComponent
    void _tickPartneredPassive(MingleComponent &); // _ZN10MingleGoal21_tickPartneredPassiveER15MingleComponent
    void _tickMingling(MingleComponent &); // _ZN10MingleGoal13_tickMinglingER15MingleComponent
    void _findNewPartner(ActorUniqueID); // _ZN10MingleGoal15_findNewPartnerE13ActorUniqueID
    void _isWithinInteractRange(Actor &)const; // _ZNK10MingleGoal22_isWithinInteractRangeER5Actor
    void _tryGetMingleComponent(Actor &); // _ZN10MingleGoal22_tryGetMingleComponentER5Actor
    void _lookAt(Actor *); // _ZN10MingleGoal7_lookAtEP5Actor
    void _canSearchForPartner()const; // _ZNK10MingleGoal20_canSearchForPartnerEv
    void _isSuitablePartner(Actor &, ActorUniqueID); // _ZN10MingleGoal18_isSuitablePartnerER5Actor13ActorUniqueID
    void _tryPathToPartner(Actor &); // _ZN10MingleGoal17_tryPathToPartnerER5Actor
    void _isSuitableAgePartner(Actor const&); // _ZN10MingleGoal21_isSuitableAgePartnerERK5Actor
    void _partnerWith(Actor &); // _ZN10MingleGoal12_partnerWithER5Actor
    void _getDistSqTo(Actor &)const; // _ZNK10MingleGoal12_getDistSqToER5Actor
};
