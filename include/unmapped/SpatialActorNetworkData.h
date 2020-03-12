#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/actor/unmapped/ActorRuntimeID.h"
#include "../bedrock/util/Vec3.h"


class SpatialActorNetworkData {

public:
    void _initializeLastSentValues();
    void getLastSentPositionForAddingEntity();
    void shouldSendUpdate(bool, bool)const;
    void forceSetSentData();
    SpatialActorNetworkData(Actor &);
    bool isAutoSendEnabled()const;
    void getLastSentRotationForAddingEntity();
    void getLastSentYHeadRotationForAddingEntity();
    void setLastReceivedMoveDataForAddedEntity(ActorRuntimeID, Vec3, Vec2, float);
    void enableAutoSend(bool);
    void handleServerData(MoveActorDeltaData const&);
    void sendUpdate(bool, bool, bool);
    void handleServerData(MoveActorAbsoluteData const&);
    void _sendPacket(Packet &);
    void _shouldProcessServerData(MoveActorAbsoluteData const&);
    void handleClientData(MoveActorAbsoluteData const&);
};
