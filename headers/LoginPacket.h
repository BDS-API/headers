#pragma once

class LoginPacket : Packet {

    virtual void Login~LoginPacket();
    virtual void Login~LoginPacket();
    virtual void LogingetId(void)const;
    virtual void _ZNK11LoginPacket7getNameB5cxx11Ev;
    virtual void Loginwrite(BinaryStream &)const;
    virtual void Loginread(ReadOnlyBinaryStream &);
    virtual void LogindisallowBatching(void)const;
}
