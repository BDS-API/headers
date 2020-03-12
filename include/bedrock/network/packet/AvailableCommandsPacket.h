#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include <vector>
#include "Packet.h"


class AvailableCommandsPacket : Packet {

public:
    class CommandData;
    class ConstrainedValueData;
    class EnumData;
    class OverloadData;
    class ParamData;
    class SoftEnumData;

    virtual void getId()const;
    virtual std::string getName()const;
    ~AvailableCommandsPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    AvailableCommandsPacket();
    std::string getEnumValues()const;
    void getConstraints()const;
    void getSoftEnums()const;
    void getEnums()const;
    std::string getPostfixes()const;
    AvailableCommandsPacket(std::vector<std::string> const&, std::vector<std::string> const&, std::vector<AvailableCommandsPacket::EnumData> &&, std::vector<AvailableCommandsPacket::ConstrainedValueData> &&, std::vector<AvailableCommandsPacket::CommandData> &&, std::vector<AvailableCommandsPacket::SoftEnumData> &&);
    void getCommands()const;
    class CommandData {

    public:
        ~CommandData();
        CommandData();
        CommandData(AvailableCommandsPacket::CommandData &&);
    };
    class ConstrainedValueData {

    public:
        ConstrainedValueData(AvailableCommandsPacket::ConstrainedValueData &&);
        ConstrainedValueData();
        ~ConstrainedValueData();
    };
    class EnumData {

    public:
        ~EnumData();
        EnumData(AvailableCommandsPacket::EnumData &&);
        EnumData();
    };
    class OverloadData {

    public:
        ~OverloadData();
        OverloadData(AvailableCommandsPacket::OverloadData &&);
        OverloadData();
    };
    class ParamData {

    public:
        ParamData(AvailableCommandsPacket::ParamData &&);
        ParamData();
        ~ParamData();
    };
    class SoftEnumData {

    public:
        SoftEnumData(AvailableCommandsPacket::SoftEnumData &&);
        ~SoftEnumData();
    };
};
