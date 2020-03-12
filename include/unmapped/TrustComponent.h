#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class TrustComponent {

public:
    ~TrustComponent();
    void initFromDefinition(Actor &);
    TrustComponent();
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getTrustedPlayerIDs()const;
    TrustComponent(TrustComponent &&);
    void assignTrustedPlayer(ActorUniqueID);
    void addAdditionalSaveData(CompoundTag &);
};
