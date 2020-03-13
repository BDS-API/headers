#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class TrustComponent {

public:
    ~TrustComponent(); // _ZN14TrustComponentD2Ev
    TrustComponent(TrustComponent &&); // _ZN14TrustComponentC2EOS_
    TrustComponent(); // _ZN14TrustComponentC2Ev
    void initFromDefinition(Actor &); // _ZN14TrustComponent18initFromDefinitionER5Actor
    void assignTrustedPlayer(ActorUniqueID); // _ZN14TrustComponent19assignTrustedPlayerE13ActorUniqueID
    void getTrustedPlayerIDs()const; // _ZNK14TrustComponent19getTrustedPlayerIDsEv
    void addAdditionalSaveData(CompoundTag &); // _ZN14TrustComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN14TrustComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
};
