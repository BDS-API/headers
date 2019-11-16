#pragma once

class RespawnPacket : Packet {

    virtual void Respawn~RespawnPacket();
    virtual void Respawn~RespawnPacket();
    virtual void RespawngetId(void)const;
    virtual void _ZNK13RespawnPacket7getNameB5cxx11Ev;
    virtual void Respawnwrite(BinaryStream &)const;
    virtual void Respawnread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
