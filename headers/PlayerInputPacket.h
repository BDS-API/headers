#pragma once

class PlayerInputPacket : Packet {

    virtual void PlayerInput~PlayerInputPacket();
    virtual void PlayerInput~PlayerInputPacket();
    virtual void PlayerInputgetId(void)const;
    virtual void _ZNK17PlayerInputPacket7getNameB5cxx11Ev;
    virtual void PlayerInputwrite(BinaryStream &)const;
    virtual void PlayerInputread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
