#pragma once

class EventPacket : Packet {

public:
    virtual ~EventPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void EventPacket(Player const*, EventPacket::Data const&);
    void EventPacket(void);
    void EventPacket(Player const*, MinecraftEventing::AchievementIds, bool);
    void EventPacket(ActorUniqueID, MinecraftEventing::AchievementIds, bool);
    void EventPacket(Player const*, AutomaticID<Dimension, int>);
    void EventPacket(Player const*, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>);
    void EventPacket(Player const*, Actor const*, MinecraftEventing::InteractionType);
    void EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, ActorType);
    void EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, std::string, int, ActorType);
    void EventPacket(Player const*, bool, Actor const*, Mob const*, ActorDamageCause);
    void EventPacket(Player const*, short, unsigned int, short);
    void EventPacket(Player const*, int, int, ActorDamageCause, bool);
    void EventPacket(Player const*, int, Actor const*);
    void EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, std::string const&);
    void EventPacket(Player const*, EventPacket::AgentResult, std::string const&, std::string const&, int);
    void EventPacket(Player const*, int, int, int, int, int);
    void EventPacket(Player const*, std::string const&, int, int, std::string const&);
    void EventPacket(Player const*, std::tuple<int, int, int>, bool);
    void EventPacket(Player const*, Mob const*);
    void EventPacket(Player const*, Raid const&, bool);
    void EventPacket(Player const&, float, float);
    void EventPacket(Player const&, MovementEventType, float, float, float, float, float);
    void getEventData(void)const;
    void getPlayerUniqueId(void)const;
    void usePlayerID(void)const;
};
