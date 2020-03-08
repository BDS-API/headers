#pragma once

#include "../bedrock/actor/unmapped/ActorRuntimeID"
#include "../bedrock/actor/Actor"
#include "../bedrock/network/packet/Packet"
#include "../bedrock/util/Vec3"
#include "../bedrock/util/Vec2"


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
