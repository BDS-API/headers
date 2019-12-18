#pragma once

class NetworkSettingsPacket : Packet {

public:
    virtual ~NetworkSettingsPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void NetworkSettingsPacket(void);
    void NetworkSettingsPacket(NetworkSettingOptions const&);
};
