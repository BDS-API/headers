#pragma once

#include <string>
#include "../../nbt/CompoundTag.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/ScoreboardIdentityRef.h"
#include "../../network/packet/Packet.h"
#include "../../../unmapped/PlayerScoreboardId.h"
#include <memory>
#include "../../../unmapped/DisplayObjective.h"
#include "../../../unmapped/Objective.h"
#include "../../network/packet/sender/PacketSender.h"
#include "../../../unmapped/ScoreboardId.h"
#include "./Scoreboard.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include <functional>
#include "../../command/CommandSoftEnumRegistry.h"
#include "../storage/LevelStorage.h"
#include "../../actor/Player.h"


class ServerScoreboard : Scoreboard {

public:
    virtual ~ServerScoreboard();
//  virtual void setDisplayObjective(std::string const&, Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition
    virtual void clearDisplayObjective(std::string const&);
    virtual void createScoreboardId(Player const&);
    virtual void createScoreboardId(Actor const&);
    virtual void createScoreboardId(std::string const&);
    virtual void onObjectiveAdded(Objective const&);
    virtual void onObjectiveRemoved(Objective &);
    virtual void onScoreChanged(ScoreboardId const&, Objective const&);
    virtual void onPlayerScoreRemoved(ScoreboardId const&, Objective const&);
    virtual void onPlayerJoined(Player const&);
    virtual void onPlayerIdentityUpdated(PlayerScoreboardId const&);
    virtual void tick();
    virtual void setPacketSender(PacketSender *);
    virtual void writeToLevelStorage();
    virtual bool isClientSide()const;

//  ServerScoreboard(ServerScoreboard::unit_test_ctor_t); //TODO: incomplete function definition
    ServerScoreboard(CommandSoftEnumRegistry, LevelStorage *);
    void _readFromLevelStorage();
    void _setDirty(bool);
    bool isTrackingObjective(Objective const&)const;
    void _notifyClearDisplayObjectiveCallback(std::string const&, DisplayObjective const&);
    void _stopTrackingObjective(Objective const&);
    void _broadcast(Packet const&);
    void _notifyScoreChangedCallback(ScoreboardId const&);
    void _notifyScoreRemovedCallback(ScoreboardId const&);
    void _notifyIdentityUpdatedCallback(ScoreboardId const&);
    void _notifySetDisplayObjectiveCallback(std::string const&, DisplayObjective const&);
    void _startTrackingObjective(Objective const&);
    void _unpackIdentityDefToScorePacket(ScoreboardIdentityRef const&, std::string const&, int);
    void _sendTo(NetworkIdentifier const&, unsigned char, Packet const&);
    void _isDirty()const;
    void _getNewScoreboardId();
    void serialize()const;
    void deserialize(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
//  void setScoreChangedCallback(std::function<void (ScoreboardId const&)>); //TODO: incomplete function definition
//  void setScoreRemovedCallback(std::function<void (ScoreboardId const&)>); //TODO: incomplete function definition
//  void setSetDisplayObjectiveCallback(std::function<void (std::string const&, DisplayObjective const&)>); //TODO: incomplete function definition
//  void setClearDisplayObjectiveCallback(std::function<void (std::string const&, DisplayObjective const&)>); //TODO: incomplete function definition
//  void setIdentityUpdatedCallback(std::function<void (ScoreboardId const&)>); //TODO: incomplete function definition
};
