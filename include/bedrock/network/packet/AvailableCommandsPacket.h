#pragma once

#include "../../../unmapped/EnumData"
#include "../../../unmapped/CommandData"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/SoftEnumData"
#include "../../../unmapped/ConstrainedValueData"
#include "../../io/BinaryStream"


class AvailableCommandsPacket : Packet {

public:
    AvailableCommandsPacket::~AvailableCommandsPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AvailableCommandsPacket(void);
    AvailableCommandsPacket(std::vector<std::string, std::allocator<std::string>> const&, std::vector<std::string, std::allocator<std::string>> const&, std::vector&&<AvailableCommandsPacket::EnumData, std::allocator<std::vector&>>, std::vector&&<AvailableCommandsPacket::ConstrainedValueData, std::allocator<std::vector&&<AvailableCommandsPacket::EnumData, std::allocator<std::vector&>>>>, std::vector&&<AvailableCommandsPacket::CommandData, std::allocator<std::allocator<std::vector&&<AvailableCommandsPacket::EnumData, std::allocator<std::vector&>>>>>, std::vector&&<AvailableCommandsPacket::SoftEnumData, std::allocator<AvailableCommandsPacket::CommandData>>);
    void getSoftEnums()const;
    void getEnums()const;
    void getCommands()const;
    void getConstraints()const;
};
