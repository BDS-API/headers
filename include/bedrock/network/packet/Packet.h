#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include "../NetEventCallback.h"
#include "../../../unmapped/NetworkIdentifier.h"


class Packet {

public:
    virtual ~Packet();
    virtual void disallowBatching()const;

    void getReliability()const;
    void getCompressible()const;
    void writeWithHeader(unsigned char, BinaryStream &)const;
    void readNoHeader(ReadOnlyBinaryStream &, unsigned char const&);
    void handle(NetworkIdentifier const&, NetEventCallback &, std::shared_ptr<Packet> &);
    Packet();
    void getClientSubId()const;
    Packet(Packet const&);
    void setClientSubId(unsigned char);
//  Packet(Compressibility); //TODO: incomplete function definition
    void setReliable();
    void setReliableOrdered();
};
