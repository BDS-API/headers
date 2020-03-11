#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <vector>
#include <string>


class UpdateSoftEnumPacket : Packet {

public:
    virtual ~UpdateSoftEnumPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateSoftEnumPacket();
//  UpdateSoftEnumPacket(SoftEnumUpdateType, std::string const&, std::vector<std::string, std::allocator<std::string>> const&); //TODO: incomplete function definition
    std::string getEnumName()const;
    std::string getValues()const;
    void getType()const;
};
