#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class AvailableCommandsPacket : Packet {

public:
    class CommandData;
    class ConstrainedValueData;
    class EnumData;
    class OverloadData;
    class ParamData;
    class SoftEnumData;

    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~AvailableCommandsPacket();
    void getEnums()const;
    void getConstraints()const;
    AvailableCommandsPacket();
    AvailableCommandsPacket(std::vector<std::string> const&, std::vector<std::string> const&, std::vector<AvailableCommandsPacket::EnumData> &&, std::vector<AvailableCommandsPacket::ConstrainedValueData> &&, std::vector<AvailableCommandsPacket::CommandData> &&, std::vector<AvailableCommandsPacket::SoftEnumData> &&);
    void getSoftEnums()const;
    std::string getEnumValues()const;
    void getCommands()const;
    std::string getPostfixes()const;
    class CommandData {

    public:
        ~CommandData();
        CommandData(AvailableCommandsPacket::CommandData &&);
        CommandData();
    };
    class ConstrainedValueData {

    public:
        ~ConstrainedValueData();
        ConstrainedValueData(AvailableCommandsPacket::ConstrainedValueData &&);
        ConstrainedValueData();
    };
    class EnumData {

    public:
        ~EnumData();
        EnumData();
        EnumData(AvailableCommandsPacket::EnumData &&);
    };
    class OverloadData {

    public:
        OverloadData();
        OverloadData(AvailableCommandsPacket::OverloadData &&);
        ~OverloadData();
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
