#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class TrustComponent {

public:

    TrustComponent(TrustComponent&&);
    TrustComponent(void);
    void initFromDefinition(Actor &);
    void assignTrustedPlayer(ActorUniqueID);
    void getTrustedPlayerIDs()const;
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
