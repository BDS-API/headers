#pragma once

class CraftingEventPacket : Packet {

    virtual void CraftingEvent~CraftingEventPacket();
    virtual void CraftingEvent~CraftingEventPacket();
    virtual void CraftingEventgetId(void)const;
    virtual void _ZNK19CraftingEventPacket7getNameB5cxx11Ev;
    virtual void CraftingEventwrite(BinaryStream &)const;
    virtual void CraftingEventread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
