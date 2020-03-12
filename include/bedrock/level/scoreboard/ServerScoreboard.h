#pragma once

#include "../storage/LevelStorage.h"
#include "../../command/CommandSoftEnumRegistry.h"
#include <string>
#include "../../../unmapped/ScoreboardId.h"
#include "../../network/packet/sender/PacketSender.h"
#include "../../../unmapped/DisplayObjective.h"
#include "../../../unmapped/PlayerScoreboardId.h"
#include "../../network/packet/Packet.h"
#include "../../../unmapped/ScoreboardIdentityRef.h"
#include "../../nbt/CompoundTag.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/Objective.h"
#include <functional>
#include "../../../unmapped/NetworkIdentifier.h"
#include <memory>
#include "Scoreboard.h"
#include "../../actor/Player.h"


class ServerScoreboard : Scoreboard {

public:
    virtual void clearDisplayObjective(std::string const&);
    virtual void setPacketSender(PacketSender *);
    virtual void onPlayerIdentityUpdated(PlayerScoreboardId const&);
    virtual void createScoreboardId(Player const&);
    virtual void onObjectiveAdded(Objective const&);
    virtual void onScoreChanged(ScoreboardId const&, Objective const&);
    virtual void onPlayerJoined(Player const&);
//  virtual void setDisplayObjective(std::string const&, Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition
    virtual void createScoreboardId(Actor const&);
    virtual bool isClientSide()const;
    virtual void onPlayerScoreRemoved(ScoreboardId const&, Objective const&);
    virtual void writeToLevelStorage();
    virtual void createScoreboardId(std::string const&);
    virtual void onObjectiveRemoved(Objective &);
    virtual void tick();
    ~ServerScoreboard();
    void _notifySetDisplayObjectiveCallback(std::string const&, DisplayObjective const&);
    void setClearDisplayObjectiveCallback(std::function<void (std::string const&, DisplayObjective const&)>);
//  ServerScoreboard(ServerScoreboard::unit_test_ctor_t); //TODO: incomplete function definition
    void setSetDisplayObjectiveCallback(std::function<void (std::string const&, DisplayObjective const&)>);
    void _notifyScoreChangedCallback(ScoreboardId const&);
    void _readFromLevelStorage();
    void setIdentityUpdatedCallback(std::function<void (ScoreboardId const&)>);
    void _startTrackingObjective(Objective const&);
    void _isDirty()const;
    ServerScoreboard(CommandSoftEnumRegistry, LevelStorage *);
    void deserialize(std::unique_ptr<CompoundTag>);
    void setScoreRemovedCallback(std::function<void (ScoreboardId const&)>);
    void _notifyIdentityUpdatedCallback(ScoreboardId const&);
    void setScoreChangedCallback(std::function<void (ScoreboardId const&)>);
    void _notifyClearDisplayObjectiveCallback(std::string const&, DisplayObjective const&);
    void _sendTo(NetworkIdentifier const&, unsigned char, Packet const&);
    void _getNewScoreboardId();
    void _setDirty(bool);
    bool isTrackingObjective(Objective const&)const;
    void _broadcast(Packet const&);
    void _stopTrackingObjective(Objective const&);
    void _notifyScoreRemovedCallback(ScoreboardId const&);
    void serialize()const;
    void _unpackIdentityDefToScorePacket(ScoreboardIdentityRef const&, std::string const&, int);
};
