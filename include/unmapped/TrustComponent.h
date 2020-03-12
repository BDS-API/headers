#pragma once

#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/nbt/CompoundTag.h"


class TrustComponent {

public:
    void initFromDefinition(Actor &);
    TrustComponent(TrustComponent &&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void assignTrustedPlayer(ActorUniqueID);
    void getTrustedPlayerIDs()const;
    void addAdditionalSaveData(CompoundTag &);
    TrustComponent();
    ~TrustComponent();
};
