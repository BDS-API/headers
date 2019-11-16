#pragma once

class PlayerListPacket : Packet {

    virtual void PlayerList~PlayerListPacket();
    virtual void PlayerList~PlayerListPacket();
    virtual void PlayerListgetId(void)const;
    virtual void _ZNK16PlayerListPacket7getNameB5cxx11Ev;
    virtual void PlayerListwrite(BinaryStream &)const;
    virtual void PlayerListread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
