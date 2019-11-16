#pragma once

class EntityServerPacket : Packet {

    virtual void EntityServer~EntityServerPacket();
    virtual void EntityServer~EntityServerPacket();
    virtual void EntityServergetId(void)const;
    virtual void _ZNK18EntityServerPacket7getNameB5cxx11Ev;
    virtual void EntityServerwrite(BinaryStream &)const;
    virtual void EntityServerread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
