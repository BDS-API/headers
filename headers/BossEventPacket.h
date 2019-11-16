#pragma once

class BossEventPacket : Packet {

    virtual void BossEvent~BossEventPacket();
    virtual void BossEvent~BossEventPacket();
    virtual void BossEventgetId(void)const;
    virtual void _ZNK15BossEventPacket7getNameB5cxx11Ev;
    virtual void BossEventwrite(BinaryStream &)const;
    virtual void BossEventread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
