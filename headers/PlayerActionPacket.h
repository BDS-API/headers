#pragma once

class PlayerActionPacket : Packet {

    virtual void PlayerAction~PlayerActionPacket();
    virtual void PlayerAction~PlayerActionPacket();
    virtual void PlayerActiongetId(void)const;
    virtual void _ZNK18PlayerActionPacket7getNameB5cxx11Ev;
    virtual void PlayerActionwrite(BinaryStream &)const;
    virtual void PlayerActionread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
