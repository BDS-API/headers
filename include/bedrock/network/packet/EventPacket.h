#pragma once

#include <string>
#include "../../../unmapped/Raid.h"
#include "../../io/BinaryStream.h"
#include "../../actor/Actor.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/Dimension.h"
#include "./Packet.h"
#include <tuple>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/Data.h"
#include "../../actor/Mob.h"
#include "../../actor/Player.h"


class EventPacket : Packet {

public:
    virtual ~EventPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EventPacket(Player const*, EventPacket::Data const&);
    EventPacket();
//  EventPacket(Player const*, MinecraftEventing::AchievementIds, bool); //TODO: incomplete function definition
//  EventPacket(ActorUniqueID, MinecraftEventing::AchievementIds, bool); //TODO: incomplete function definition
//  EventPacket(Player const*, AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  EventPacket(Player const*, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  EventPacket(Player const*, Actor const*, MinecraftEventing::InteractionType); //TODO: incomplete function definition
//  EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, ActorType); //TODO: incomplete function definition
//  EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, std::string, int, ActorType); //TODO: incomplete function definition
//  EventPacket(Player const*, bool, Actor const*, Mob const*, ActorDamageCause); //TODO: incomplete function definition
    EventPacket(Player const*, short, unsigned int, short);
//  EventPacket(Player const*, int, int, ActorDamageCause, bool); //TODO: incomplete function definition
    EventPacket(Player const*, int, Actor const*);
//  EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, std::string const&); //TODO: incomplete function definition
//  EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, int); //TODO: incomplete function definition
    EventPacket(Player const*, int, int, int, int, int);
    EventPacket(Player const*, std::string const&, int, int, std::string const&);
    EventPacket(Player const*, std::tuple<int, int, int>, bool);
    EventPacket(Player const*, Mob const*);
    EventPacket(Player const*, Raid const&, bool);
    EventPacket(Player const&, float, float);
//  EventPacket(Player const&, MovementEventType, float, float, float, float, float); //TODO: incomplete function definition
    void getEventData()const;
    void getPlayerUniqueId()const;
    void usePlayerID()const;
};
