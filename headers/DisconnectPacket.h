#pragma once

class DisconnectPacket : Packet {

    virtual void Disconnect~DisconnectPacket();
    virtual void Disconnect~DisconnectPacket();
    virtual void DisconnectgetId(void)const;
    virtual void _ZNK16DisconnectPacket7getNameB5cxx11Ev;
    virtual void Disconnectwrite(BinaryStream &)const;
    virtual void Disconnectread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
