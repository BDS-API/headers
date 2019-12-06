#pragma once

class SpatialActorNetworkData {

public:

    void SpatialActorNetworkData(Actor &);
    void sendUpdate(bool, bool, bool);
    void _sendPacket(Packet &);
    void forceSetSentData(void);
    void shouldSendUpdate(bool, bool)const;
    void enableAutoSend(bool);
    bool isAutoSendEnabled(void)const;
    void handleServerData(MoveActorDeltaData const&);
    void handleServerData(MoveActorAbsoluteData const&);
    void _shouldProcessServerData(MoveActorAbsoluteData const&);
    void handleClientData(MoveActorAbsoluteData const&);
    void getLastSentPositionForAddingEntity(void);
    void _initializeLastSentValues(void);
    void getLastSentRotationForAddingEntity(void);
    void getLastSentYHeadRotationForAddingEntity(void);
    void setLastReceivedMoveDataForAddedEntity(ActorRuntimeID, Vec3, Vec2, float);
};
