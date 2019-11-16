#pragma once

class BookEditPacket : Packet {

    virtual void BookEdit~BookEditPacket();
    virtual void BookEdit~BookEditPacket();
    virtual void BookEditgetId(void)const;
    virtual void _ZNK14BookEditPacket7getNameB5cxx11Ev;
    virtual void BookEditwrite(BinaryStream &)const;
    virtual void BookEditread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
