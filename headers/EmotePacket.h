#pragma once

class EmotePacket : Packet {

    virtual void Emote~EmotePacket();
    virtual void Emote~EmotePacket();
    virtual void EmotegetId(void)const;
    virtual void _ZNK11EmotePacket7getNameB5cxx11Ev;
    virtual void Emotewrite(BinaryStream &)const;
    virtual void Emoteread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
