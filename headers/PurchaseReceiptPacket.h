#pragma once

class PurchaseReceiptPacket : Packet {

    virtual ~PurchaseReceiptPacket();
    virtual ~PurchaseReceiptPacket();
    virtual void getId(void)const;
    virtual void _ZNK21PurchaseReceiptPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
