#pragma once

#include "Scoreboard.h"
#include <memory>
#include <string>
#include <functional>
#include "../../command/CommandSoftEnumRegistry.h"


class ServerScoreboard : Scoreboard {

public:
    virtual void createScoreboardId(Actor const&);
    virtual void createScoreboardId(Player const&);
    virtual void createScoreboardId(std::string const&);
    virtual void onPlayerScoreRemoved(ScoreboardId const&, Objective const&);
    virtual void onPlayerIdentityUpdated(PlayerScoreboardId const&);
    virtual void onScoreChanged(ScoreboardId const&, Objective const&);
    virtual void tick();
    virtual void writeToLevelStorage();
    virtual void onObjectiveAdded(Objective const&);
    virtual bool isClientSide()const;
    virtual void onObjectiveRemoved(Objective &);
//  virtual void setDisplayObjective(std::string const&, Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition
    virtual void clearDisplayObjective(std::string const&);
    virtual void setPacketSender(PacketSender *);
    virtual void onPlayerJoined(Player const&);
    ~ServerScoreboard();
    void _setDirty(bool);
    void setSetDisplayObjectiveCallback(std::function<void (std::string const&, DisplayObjective const&)>);
    void _stopTrackingObjective(Objective const&);
    void _unpackIdentityDefToScorePacket(ScoreboardIdentityRef const&, std::string const&, int);
    void setScoreChangedCallback(std::function<void (ScoreboardId const&)>);
    void _isDirty()const;
    void deserialize(std::unique_ptr<CompoundTag>);
    void setIdentityUpdatedCallback(std::function<void (ScoreboardId const&)>);
    void _notifySetDisplayObjectiveCallback(std::string const&, DisplayObjective const&);
    void _broadcast(Packet const&);
    void _notifyIdentityUpdatedCallback(ScoreboardId const&);
    void _notifyScoreRemovedCallback(ScoreboardId const&);
    void _sendTo(NetworkIdentifier const&, unsigned char, Packet const&);
//  ServerScoreboard(ServerScoreboard::unit_test_ctor_t); //TODO: incomplete function definition
    void _startTrackingObjective(Objective const&);
    void _getNewScoreboardId();
    void _notifyClearDisplayObjectiveCallback(std::string const&, DisplayObjective const&);
    void serialize()const;
    void setScoreRemovedCallback(std::function<void (ScoreboardId const&)>);
    bool isTrackingObjective(Objective const&)const;
    ServerScoreboard(CommandSoftEnumRegistry, LevelStorage *);
    void setClearDisplayObjectiveCallback(std::function<void (std::string const&, DisplayObjective const&)>);
    void _readFromLevelStorage();
    void _notifyScoreChangedCallback(ScoreboardId const&);
};
