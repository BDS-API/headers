#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../NetEventCallback.h"
#include <memory>
#include "../../../unmapped/NetworkIdentifier.h"


class Packet {

public:
    ~Packet();
    virtual void disallowBatching()const;
    void writeWithHeader(unsigned char, BinaryStream &)const;
    Packet(Packet const&);
    void getReliability()const;
    void setReliableOrdered();
//  Packet(Compressibility); //TODO: incomplete function definition
    void setClientSubId(unsigned char);
    void setReliable();
    Packet();
    void readNoHeader(ReadOnlyBinaryStream &, unsigned char const&);
    void getCompressible()const;
    void handle(NetworkIdentifier const&, NetEventCallback &, std::shared_ptr<Packet> &);
    void getClientSubId()const;
};
