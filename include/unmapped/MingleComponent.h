#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/actor/Actor"


class MingleComponent {

public:

    void getMingleState()const;
    void getPreviousPartnerId()const;
    void getPartnerId()const;
    MingleComponent(void);
    void setMingleState(MingleComponent::MingleState);
    void setPartnerId(ActorUniqueID);
    void clearPreviousPartnerId();
    void resetState();
    void fetchCurrentPartner(Actor const&)const;
};
