#pragma once

class TrustComponent {

public:

    TrustComponent(TrustComponent&&);
    TrustComponent(void);
    void initFromDefinition(Actor &);
    void assignTrustedPlayer(ActorUniqueID);
    void getTrustedPlayerIDs(void)const;
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
