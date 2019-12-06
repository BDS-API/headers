#pragma once

class PlayerActionPacket : Packet {

public:
    virtual ~PlayerActionPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlayerActionPacket(void);
    void PlayerActionPacket(PlayerActionType, BlockPos const&, int, ActorRuntimeID);
    void PlayerActionPacket(PlayerActionType, int, ActorRuntimeID);
    void PlayerActionPacket(PlayerActionType, BlockPos const&, ActorRuntimeID);
    void PlayerActionPacket(PlayerActionType, ActorRuntimeID);
    void PlayerActionPacket(PlayerActionType, BlockPos const&, unsigned char, ActorRuntimeID);
};
