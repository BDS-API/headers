#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/network/packet/Packet.h"
#include "../bedrock/actor/unmapped/ActorRuntimeID.h"
#include "../bedrock/util/Vec2.h"
#include "../bedrock/actor/Actor.h"
#include "./MoveActorAbsoluteData.h"
#include "./MoveActorDeltaData.h"


class SpatialActorNetworkData {

public:

    SpatialActorNetworkData(Actor &);
    void sendUpdate(bool, bool, bool);
    void _sendPacket(Packet &);
    void forceSetSentData();
    void shouldSendUpdate(bool, bool)const;
    void enableAutoSend(bool);
    bool isAutoSendEnabled()const;
    void handleServerData(MoveActorDeltaData const&);
    void handleServerData(MoveActorAbsoluteData const&);
    void _shouldProcessServerData(MoveActorAbsoluteData const&);
    void handleClientData(MoveActorAbsoluteData const&);
    void getLastSentPositionForAddingEntity();
    void _initializeLastSentValues();
    void getLastSentRotationForAddingEntity();
    void getLastSentYHeadRotationForAddingEntity();
    void setLastReceivedMoveDataForAddedEntity(ActorRuntimeID, Vec3, Vec2, float);
};
