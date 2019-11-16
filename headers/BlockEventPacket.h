#pragma once

class BlockEventPacket : Packet {

    virtual void BlockEvent~BlockEventPacket();
    virtual void BlockEvent~BlockEventPacket();
    virtual void BlockEventgetId(void)const;
    virtual void _ZNK16BlockEventPacket7getNameB5cxx11Ev;
    virtual void BlockEventwrite(BinaryStream &)const;
    virtual void BlockEventread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
