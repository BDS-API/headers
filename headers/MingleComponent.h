#pragma once

class MingleComponent {

public:

    void getMingleState(void)const;
    void getPreviousPartnerId(void)const;
    void getPartnerId(void)const;
    void MingleComponent(void);
    void setMingleState(MingleComponent::MingleState);
    void setPartnerId(ActorUniqueID);
    void clearPreviousPartnerId(void);
    void resetState(void);
    void fetchCurrentPartner(Actor const&)const;
};
