#pragma once

#include <string>
#include <tuple>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class EventPacket : Packet {

public:
    class Data;

    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~EventPacket();
    virtual std::string getName()const;
    EventPacket(Player const*, Mob const*);
//  EventPacket(Player const*, bool, Actor const*, Mob const*, ActorDamageCause); //TODO: incomplete function definition
//  EventPacket(Player const*, MinecraftEventing::AchievementIds, bool); //TODO: incomplete function definition
    EventPacket(Player const&, float, float);
//  EventPacket(Player const&, MovementEventType, float, float, float, float, float); //TODO: incomplete function definition
    EventPacket();
    EventPacket(Player const*, short, unsigned int, short);
    EventPacket(Player const*, EventPacket::Data const&);
//  EventPacket(Player const*, Actor const*, MinecraftEventing::InteractionType); //TODO: incomplete function definition
    EventPacket(Player const*, int, int, int, int, int);
    void getPlayerUniqueId()const;
    EventPacket(Player const*, std::string const&, int, int, std::string const&);
//  EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, ActorType); //TODO: incomplete function definition
//  EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, std::string, int, ActorType); //TODO: incomplete function definition
//  EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, int); //TODO: incomplete function definition
//  EventPacket(Player const*, int, int, ActorDamageCause, bool); //TODO: incomplete function definition
//  EventPacket(ActorUniqueID, MinecraftEventing::AchievementIds, bool); //TODO: incomplete function definition
//  EventPacket(Player const*, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, std::string const&); //TODO: incomplete function definition
    void usePlayerID()const;
    EventPacket(Player const*, std::tuple<int, int, int>, bool);
    EventPacket(Player const*, int, Actor const*);
//  EventPacket(Player const*, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    EventPacket(Player const*, Raid const&, bool);
    void getEventData()const;
    class Data {

    public:
        Data(EventPacket::Data const&);
        Data();
        ~Data();
    };
};
