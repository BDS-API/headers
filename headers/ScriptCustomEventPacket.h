#pragma once

class ScriptCustomEventPacket : Packet {

    virtual ~ScriptCustomEventPacket();
    virtual ~ScriptCustomEventPacket();
    virtual void getId(void)const;
    virtual void _ZNK23ScriptCustomEventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
