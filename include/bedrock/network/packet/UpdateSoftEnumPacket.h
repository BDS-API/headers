#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class UpdateSoftEnumPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~UpdateSoftEnumPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    void getType()const;
    std::string getEnumName()const;
    std::string getValues()const;
//  UpdateSoftEnumPacket(SoftEnumUpdateType, std::string const&, std::vector<std::string> const&); //TODO: incomplete function definition
    UpdateSoftEnumPacket();
};
