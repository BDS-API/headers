#pragma once

class SetDifficultyPacket : Packet {

    virtual ~SetDifficultyPacket();
    virtual ~SetDifficultyPacket();
    virtual void getId(void)const;
    virtual void _ZNK19SetDifficultyPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
