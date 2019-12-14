#pragma once

class GuiDataPickItemPacket : Packet {

public:
    virtual ~GuiDataPickItemPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void GuiDataPickItemPacket(void);
    void GuiDataPickItemPacket(std::string const&, std::string const&, int const&);
};
