#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class MingleComponent {

public:
    void setPartnerId(ActorUniqueID);
    void clearPreviousPartnerId();
    void resetState();
    MingleComponent();
    void getMingleState()const;
    void fetchCurrentPartner(Actor const&)const;
    void getPreviousPartnerId()const;
//  void setMingleState(MingleComponent::MingleState); //TODO: incomplete function definition
    void getPartnerId()const;
};
