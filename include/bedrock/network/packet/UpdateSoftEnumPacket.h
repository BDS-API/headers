#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include <vector>
#include "Packet.h"


class UpdateSoftEnumPacket : Packet {

public:
    virtual void getId()const;
    ~UpdateSoftEnumPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    UpdateSoftEnumPacket();
    std::string getValues()const;
    void getType()const;
//  UpdateSoftEnumPacket(SoftEnumUpdateType, std::string const&, std::vector<std::string> const&); //TODO: incomplete function definition
    std::string getEnumName()const;
};
