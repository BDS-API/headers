#pragma once

class AvailableCommandsPacket : Packet {

public:
    virtual ~AvailableCommandsPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AvailableCommandsPacket(void);
    void AvailableCommandsPacket(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::vector&&<AvailableCommandsPacket::EnumData, std::allocator<std::vector&>>, std::vector&&<AvailableCommandsPacket::ConstrainedValueData, std::allocator<std::vector&&<AvailableCommandsPacket::EnumData, std::allocator<std::vector&>>>>, std::vector&&<AvailableCommandsPacket::CommandData, std::allocator<std::allocator<std::vector&&<AvailableCommandsPacket::EnumData, std::allocator<std::vector&>>>>>, std::vector&&<AvailableCommandsPacket::SoftEnumData, std::allocator<AvailableCommandsPacket::CommandData>>);
    void getSoftEnums(void)const;
    void getEnums(void)const;
    void getCommands(void)const;
    void getConstraints(void)const;
};
