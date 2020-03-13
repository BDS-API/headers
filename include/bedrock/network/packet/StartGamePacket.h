#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class StartGamePacket : Packet {

public:
    ~StartGamePacket(); // _ZN15StartGamePacketD2Ev
    virtual void getId()const; // _ZNK15StartGamePacket5getIdEv
    virtual std::string getName()const; // _ZNK15StartGamePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15StartGamePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15StartGamePacket4readER20ReadOnlyBinaryStream
    StartGamePacket(); // _ZN15StartGamePacketC2Ev
//  StartGamePacket(LevelSettings const&, ActorUniqueID, ActorRuntimeID, GameType, Vec3 const&, Vec2 const&, std::string const&, std::string const&, ContentIdentity const&, BlockPalette const&, std::string const&, bool, bool, unsigned long, int); //TODO: incomplete function definition // _ZN15StartGamePacketC2ERK13LevelSettings13ActorUniqueID14ActorRuntimeID8GameTypeRK4Vec3RK4Vec2RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESJ_RK15ContentIdentityRK12BlockPaletteSJ_bbmi
    void getLevelSettings()const; // _ZNK15StartGamePacket16getLevelSettingsEv
    std::string getMultiplayerCorrelationId()const; // _ZNK15StartGamePacket27getMultiplayerCorrelationIdB5cxx11Ev
    void getBlockPaletteList()const; // _ZNK15StartGamePacket19getBlockPaletteListEv
    void getItemData()const; // _ZNK15StartGamePacket11getItemDataEv
};
