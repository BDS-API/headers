#pragma once

class SettingsCommandPacket : Packet {

public:
    virtual ~SettingsCommandPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SettingsCommandPacket(void);
    void SettingsCommandPacket(std::string const&, bool);
    void getSupressOutput(void)const;
};
