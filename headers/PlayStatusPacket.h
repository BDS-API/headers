#pragma once

class PlayStatusPacket : Packet {

    virtual void PlayStatus~PlayStatusPacket();
    virtual void PlayStatus~PlayStatusPacket();
    virtual void PlayStatusgetId(void)const;
    virtual void _ZNK16PlayStatusPacket7getNameB5cxx11Ev;
    virtual void PlayStatuswrite(BinaryStream &)const;
    virtual void PlayStatusread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
