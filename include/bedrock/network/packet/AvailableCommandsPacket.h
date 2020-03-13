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

    ~AvailableCommandsPacket(); // _ZN23AvailableCommandsPacketD2Ev
    virtual void getId()const; // _ZNK23AvailableCommandsPacket5getIdEv
    virtual std::string getName()const; // _ZNK23AvailableCommandsPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23AvailableCommandsPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23AvailableCommandsPacket4readER20ReadOnlyBinaryStream
    AvailableCommandsPacket(); // _ZN23AvailableCommandsPacketC2Ev
    AvailableCommandsPacket(std::vector<std::string> const&, std::vector<std::string> const&, std::vector<AvailableCommandsPacket::EnumData> &&, std::vector<AvailableCommandsPacket::ConstrainedValueData> &&, std::vector<AvailableCommandsPacket::CommandData> &&, std::vector<AvailableCommandsPacket::SoftEnumData> &&); // _ZN23AvailableCommandsPacketC2ERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EESA_OS0_INS_8EnumDataESaISB_EEOS0_INS_20ConstrainedValueDataESaISF_EEOS0_INS_11CommandDataESaISJ_EEOS0_INS_12SoftEnumDataESaISN_EE
    std::string getEnumValues()const; // _ZNK23AvailableCommandsPacket13getEnumValuesB5cxx11Ev
    void getSoftEnums()const; // _ZNK23AvailableCommandsPacket12getSoftEnumsEv
    std::string getPostfixes()const; // _ZNK23AvailableCommandsPacket12getPostfixesB5cxx11Ev
    void getEnums()const; // _ZNK23AvailableCommandsPacket8getEnumsEv
    void getCommands()const; // _ZNK23AvailableCommandsPacket11getCommandsEv
    void getConstraints()const; // _ZNK23AvailableCommandsPacket14getConstraintsEv
    class CommandData {

    public:
        ~CommandData(); // _ZN23AvailableCommandsPacket11CommandDataD2Ev
        CommandData(AvailableCommandsPacket::CommandData &&); // _ZN23AvailableCommandsPacket11CommandDataC2EOS0_
        CommandData(); // _ZN23AvailableCommandsPacket11CommandDataC2Ev
    };
    class ConstrainedValueData {

    public:
        ~ConstrainedValueData(); // _ZN23AvailableCommandsPacket20ConstrainedValueDataD2Ev
        ConstrainedValueData(AvailableCommandsPacket::ConstrainedValueData &&); // _ZN23AvailableCommandsPacket20ConstrainedValueDataC2EOS0_
        ConstrainedValueData(); // _ZN23AvailableCommandsPacket20ConstrainedValueDataC2Ev
    };
    class EnumData {

    public:
        ~EnumData(); // _ZN23AvailableCommandsPacket8EnumDataD2Ev
        EnumData(AvailableCommandsPacket::EnumData &&); // _ZN23AvailableCommandsPacket8EnumDataC2EOS0_
        EnumData(); // _ZN23AvailableCommandsPacket8EnumDataC2Ev
    };
    class OverloadData {

    public:
        ~OverloadData(); // _ZN23AvailableCommandsPacket12OverloadDataD2Ev
        OverloadData(AvailableCommandsPacket::OverloadData &&); // _ZN23AvailableCommandsPacket12OverloadDataC2EOS0_
        OverloadData(); // _ZN23AvailableCommandsPacket12OverloadDataC2Ev
    };
    class ParamData {

    public:
        ~ParamData(); // _ZN23AvailableCommandsPacket9ParamDataD2Ev
        ParamData(AvailableCommandsPacket::ParamData &&); // _ZN23AvailableCommandsPacket9ParamDataC2EOS0_
        ParamData(); // _ZN23AvailableCommandsPacket9ParamDataC2Ev
    };
    class SoftEnumData {

    public:
        ~SoftEnumData(); // _ZN23AvailableCommandsPacket12SoftEnumDataD2Ev
        SoftEnumData(AvailableCommandsPacket::SoftEnumData &&); // _ZN23AvailableCommandsPacket12SoftEnumDataC2EOS0_
    };
};
