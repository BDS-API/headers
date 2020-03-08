#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/Raid"
#include "../../io/BinaryStream"
#include "../../../unmapped/Dimension"
#include "../../actor/Player"
#include "../../../unmapped/Data"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/Mob"
#include "../../actor/Actor"


class EventPacket : Packet {

public:
    virtual EventPacket::~EventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EventPacket(Player const*, EventPacket::Data const&);
    EventPacket(void);
    EventPacket(Player const*, MinecraftEventing::AchievementIds, bool);
    EventPacket(ActorUniqueID, MinecraftEventing::AchievementIds, bool);
    EventPacket(Player const*, AutomaticID<Dimension, int>);
    EventPacket(Player const*, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>);
    EventPacket(Player const*, Actor const*, MinecraftEventing::InteractionType);
    EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, ActorType);
    EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, std::string, int, ActorType);
    EventPacket(Player const*, bool, Actor const*, Mob const*, ActorDamageCause);
    EventPacket(Player const*, short, unsigned int, short);
    EventPacket(Player const*, int, int, ActorDamageCause, bool);
    EventPacket(Player const*, int, Actor const*);
    EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, std::string const&);
    EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, int);
    EventPacket(Player const*, int, int, int, int, int);
    EventPacket(Player const*, std::string const&, int, int, std::string const&);
    EventPacket(Player const*, std::tuple<int, int, int>, bool);
    EventPacket(Player const*, Mob const*);
    EventPacket(Player const*, Raid const&, bool);
    EventPacket(Player const&, float, float);
    EventPacket(Player const&, MovementEventType, float, float, float, float, float);
    void getEventData()const;
    void getPlayerUniqueId()const;
    void usePlayerID()const;
};
