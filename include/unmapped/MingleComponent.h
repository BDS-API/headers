#pragma once

#include "../bedrock/actor/Actor"


class MingleComponent {

public:

    void getMingleState(void)const;
    void getPreviousPartnerId(void)const;
    void getPartnerId(void)const;
    MingleComponent(void);
    void setMingleState(MingleComponent::MingleState);
    void setPartnerId(ActorUniqueID);
    void clearPreviousPartnerId(void);
    void resetState(void);
    void fetchCurrentPartner(Actor const&)const;
};
