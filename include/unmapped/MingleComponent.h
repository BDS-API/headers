#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class MingleComponent {

public:
    void getMingleState()const; // _ZNK15MingleComponent14getMingleStateEv
    void getPreviousPartnerId()const; // _ZNK15MingleComponent20getPreviousPartnerIdEv
    void getPartnerId()const; // _ZNK15MingleComponent12getPartnerIdEv
    MingleComponent(); // _ZN15MingleComponentC2Ev
//  void setMingleState(MingleComponent::MingleState); //TODO: incomplete function definition // _ZN15MingleComponent14setMingleStateENS_11MingleStateE
    void setPartnerId(ActorUniqueID); // _ZN15MingleComponent12setPartnerIdE13ActorUniqueID
    void clearPreviousPartnerId(); // _ZN15MingleComponent22clearPreviousPartnerIdEv
    void resetState(); // _ZN15MingleComponent10resetStateEv
    void fetchCurrentPartner(Actor const&)const; // _ZNK15MingleComponent19fetchCurrentPartnerERK5Actor
};
