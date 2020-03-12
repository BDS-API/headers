#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/network/packet/Packet.h"
#include "MoveActorDeltaData.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/unmapped/ActorRuntimeID.h"
#include "../bedrock/actor/Actor.h"
#include "MoveActorAbsoluteData.h"


class SpatialActorNetworkData {

public:
    void handleServerData(MoveActorDeltaData const&);
    void getLastSentPositionForAddingEntity();
    void _shouldProcessServerData(MoveActorAbsoluteData const&);
    void setLastReceivedMoveDataForAddedEntity(ActorRuntimeID, Vec3, Vec2, float);
    void sendUpdate(bool, bool, bool);
    void enableAutoSend(bool);
    void shouldSendUpdate(bool, bool)const;
    bool isAutoSendEnabled()const;
    void forceSetSentData();
    void getLastSentYHeadRotationForAddingEntity();
    SpatialActorNetworkData(Actor &);
    void _initializeLastSentValues();
    void _sendPacket(Packet &);
    void handleServerData(MoveActorAbsoluteData const&);
    void handleClientData(MoveActorAbsoluteData const&);
    void getLastSentRotationForAddingEntity();
};
