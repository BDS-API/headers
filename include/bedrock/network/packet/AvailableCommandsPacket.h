#pragma once

#include "../../../unmapped/ConstrainedValueData.h"
#include "../../../unmapped/SoftEnumData.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "../../../unmapped/EnumData.h"
#include "./Packet.h"
#include <vector>
#include "../../command/CommandData.h"
#include <string>


class AvailableCommandsPacket : Packet {

public:
    virtual ~AvailableCommandsPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AvailableCommandsPacket();
    AvailableCommandsPacket(std::vector<std::string, std::allocator<std::string>> const&, std::vector<std::string, std::allocator<std::string>> const&, std::vector<AvailableCommandsPacket::EnumData, std::allocator<std::vector &>> &&, std::vector<AvailableCommandsPacket::ConstrainedValueData, std::allocator<std::vector<AvailableCommandsPacket::EnumData, std::allocator<std::vector &>> &&>> &&, std::vector<AvailableCommandsPacket::CommandData, std::allocator<std::allocator<std::vector<AvailableCommandsPacket::EnumData, std::allocator<std::vector &>> &&>>> &&, std::vector<AvailableCommandsPacket::SoftEnumData, std::allocator<AvailableCommandsPacket::CommandData>> &&);
    std::string getEnumValues()const;
    void getSoftEnums()const;
    std::string getPostfixes()const;
    void getEnums()const;
    void getCommands()const;
    void getConstraints()const;
};
