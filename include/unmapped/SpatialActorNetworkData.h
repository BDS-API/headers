#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/unmapped/ActorRuntimeID.h"
#include "../bedrock/util/Vec2.h"


class SpatialActorNetworkData {

public:
    SpatialActorNetworkData(Actor &); // _ZN23SpatialActorNetworkDataC2ER5Actor
    void sendUpdate(bool, bool, bool); // _ZN23SpatialActorNetworkData10sendUpdateEbbb
    void _sendPacket(Packet &); // _ZN23SpatialActorNetworkData11_sendPacketER6Packet
    void forceSetSentData(); // _ZN23SpatialActorNetworkData16forceSetSentDataEv
    void shouldSendUpdate(bool, bool)const; // _ZNK23SpatialActorNetworkData16shouldSendUpdateEbb
    void enableAutoSend(bool); // _ZN23SpatialActorNetworkData14enableAutoSendEb
    bool isAutoSendEnabled()const; // _ZNK23SpatialActorNetworkData17isAutoSendEnabledEv
    void handleServerData(MoveActorDeltaData const&); // _ZN23SpatialActorNetworkData16handleServerDataERK18MoveActorDeltaData
    void handleServerData(MoveActorAbsoluteData const&); // _ZN23SpatialActorNetworkData16handleServerDataERK21MoveActorAbsoluteData
    void _shouldProcessServerData(MoveActorAbsoluteData const&); // _ZN23SpatialActorNetworkData24_shouldProcessServerDataERK21MoveActorAbsoluteData
    void handleClientData(MoveActorAbsoluteData const&); // _ZN23SpatialActorNetworkData16handleClientDataERK21MoveActorAbsoluteData
    void getLastSentPositionForAddingEntity(); // _ZN23SpatialActorNetworkData34getLastSentPositionForAddingEntityEv
    void _initializeLastSentValues(); // _ZN23SpatialActorNetworkData25_initializeLastSentValuesEv
    void getLastSentRotationForAddingEntity(); // _ZN23SpatialActorNetworkData34getLastSentRotationForAddingEntityEv
    void getLastSentYHeadRotationForAddingEntity(); // _ZN23SpatialActorNetworkData39getLastSentYHeadRotationForAddingEntityEv
    void setLastReceivedMoveDataForAddedEntity(ActorRuntimeID, Vec3, Vec2, float); // _ZN23SpatialActorNetworkData37setLastReceivedMoveDataForAddedEntityE14ActorRuntimeID4Vec34Vec2f
};
