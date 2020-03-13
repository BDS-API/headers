#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"
#include <tuple>


class EventPacket : Packet {

public:
    class Data;

    ~EventPacket(); // _ZN11EventPacketD2Ev
    virtual void getId()const; // _ZNK11EventPacket5getIdEv
    virtual std::string getName()const; // _ZNK11EventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK11EventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN11EventPacket4readER20ReadOnlyBinaryStream
    EventPacket(Player const*, EventPacket::Data const&); // _ZN11EventPacketC2EPK6PlayerRKNS_4DataE
    EventPacket(); // _ZN11EventPacketC2Ev
//  EventPacket(Player const*, MinecraftEventing::AchievementIds, bool); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6PlayerN17MinecraftEventing14AchievementIdsEb
//  EventPacket(ActorUniqueID, MinecraftEventing::AchievementIds, bool); //TODO: incomplete function definition // _ZN11EventPacketC2E13ActorUniqueIDN17MinecraftEventing14AchievementIdsEb
//  EventPacket(Player const*, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6Player11AutomaticIDI9DimensioniE
//  EventPacket(Player const*, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6Player11AutomaticIDI9DimensioniES5_
//  EventPacket(Player const*, Actor const*, MinecraftEventing::InteractionType); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6PlayerPK5ActorN17MinecraftEventing15InteractionTypeE
//  EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, ActorType); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6PlayerPK5ActorPK3Mob16ActorDamageCause9ActorType
//  EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, std::string, int, ActorType); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6PlayerPK5ActorPK3Mob16ActorDamageCauseNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi9ActorType
//  EventPacket(Player const*, bool, Actor const*, Mob const*, ActorDamageCause); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6PlayerbPK5ActorPK3Mob16ActorDamageCause
    EventPacket(Player const*, short, unsigned int, short); // _ZN11EventPacketC2EPK6Playersjs
//  EventPacket(Player const*, int, int, ActorDamageCause, bool); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6Playerii16ActorDamageCauseb
    EventPacket(Player const*, int, Actor const*); // _ZN11EventPacketC2EPK6PlayeriPK5Actor
//  EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, std::string const&); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6PlayerNS_11AgentResultERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_SB_
//  EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, int); //TODO: incomplete function definition // _ZN11EventPacketC2EPK6PlayerNS_11AgentResultERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_i
    EventPacket(Player const*, int, int, int, int, int); // _ZN11EventPacketC2EPK6Playeriiiii
    EventPacket(Player const*, std::string const&, int, int, std::string const&); // _ZN11EventPacketC2EPK6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiSA_
    EventPacket(Player const*, std::tuple<int, int, int>, bool); // _ZN11EventPacketC2EPK6PlayerSt5tupleIJiiiEEb
    EventPacket(Player const*, Mob const*); // _ZN11EventPacketC2EPK6PlayerPK3Mob
    EventPacket(Player const*, Raid const&, bool); // _ZN11EventPacketC2EPK6PlayerRK4Raidb
    EventPacket(Player const&, float, float); // _ZN11EventPacketC2ERK6Playerff
//  EventPacket(Player const&, MovementEventType, float, float, float, float, float); //TODO: incomplete function definition // _ZN11EventPacketC2ERK6Player17MovementEventTypefffff
    void getEventData()const; // _ZNK11EventPacket12getEventDataEv
    void getPlayerUniqueId()const; // _ZNK11EventPacket17getPlayerUniqueIdEv
    void usePlayerID()const; // _ZNK11EventPacket11usePlayerIDEv
    class Data {

    public:
        ~Data(); // _ZN11EventPacket4DataD2Ev
        Data(EventPacket::Data const&); // _ZN11EventPacket4DataC2ERKS0_
        Data(); // _ZN11EventPacket4DataC2Ev
    };
};
