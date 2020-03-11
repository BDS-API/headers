#pragma once

#include "./DataLoadHelper.h"
#include "./TrustComponent.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class TrustComponent {

public:

    ~TrustComponent();
    TrustComponent(TrustComponent &&);
    TrustComponent();
    void initFromDefinition(Actor &);
    void assignTrustedPlayer(ActorUniqueID);
    void getTrustedPlayerIDs()const;
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
