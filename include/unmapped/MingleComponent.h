#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class MingleComponent {

public:

    void getMingleState()const;
    void getPreviousPartnerId()const;
    void getPartnerId()const;
    MingleComponent();
//  void setMingleState(MingleComponent::MingleState); //TODO: incomplete function definition
    void setPartnerId(ActorUniqueID);
    void clearPreviousPartnerId();
    void resetState();
    void fetchCurrentPartner(Actor const&)const;
};
