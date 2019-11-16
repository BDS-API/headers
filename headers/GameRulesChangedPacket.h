#pragma once

class GameRulesChangedPacket : Packet {

    virtual void GameRulesChanged~GameRulesChangedPacket();
    virtual void GameRulesChanged~GameRulesChangedPacket();
    virtual void GameRulesChangedgetId(void)const;
    virtual void _ZNK22GameRulesChangedPacket7getNameB5cxx11Ev;
    virtual void GameRulesChangedwrite(BinaryStream &)const;
    virtual void GameRulesChangedread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
