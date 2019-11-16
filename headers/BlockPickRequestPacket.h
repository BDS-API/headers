#pragma once

class BlockPickRequestPacket : Packet {

    virtual void BlockPickRequest~BlockPickRequestPacket();
    virtual void BlockPickRequest~BlockPickRequestPacket();
    virtual void BlockPickRequestgetId(void)const;
    virtual void _ZNK22BlockPickRequestPacket7getNameB5cxx11Ev;
    virtual void BlockPickRequestwrite(BinaryStream &)const;
    virtual void BlockPickRequestread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
