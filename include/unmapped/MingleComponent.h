#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/actor/Actor.h"


class MingleComponent {

public:
    void getMingleState()const;
    void fetchCurrentPartner(Actor const&)const;
    MingleComponent();
    void getPreviousPartnerId()const;
    void setPartnerId(ActorUniqueID);
    void getPartnerId()const;
//  void setMingleState(MingleComponent::MingleState); //TODO: incomplete function definition
    void clearPreviousPartnerId();
    void resetState();
};
