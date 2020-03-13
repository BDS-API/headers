#pragma once

#include <memory>
#include "Scoreboard.h"
#include "../../command/CommandSoftEnumRegistry.h"
#include <string>
#include <functional>


class ServerScoreboard : Scoreboard {

public:
    ~ServerScoreboard(); // _ZN16ServerScoreboardD2Ev
//  virtual void setDisplayObjective(std::string const&, Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition // _ZN16ServerScoreboard19setDisplayObjectiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK9Objective18ObjectiveSortOrder
    virtual void clearDisplayObjective(std::string const&); // _ZN16ServerScoreboard21clearDisplayObjectiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void createScoreboardId(Player const&); // _ZN16ServerScoreboard18createScoreboardIdERK6Player
    virtual void createScoreboardId(Actor const&); // _ZN16ServerScoreboard18createScoreboardIdERK5Actor
    virtual void createScoreboardId(std::string const&); // _ZN16ServerScoreboard18createScoreboardIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onObjectiveAdded(Objective const&); // _ZN16ServerScoreboard16onObjectiveAddedERK9Objective
    virtual void onObjectiveRemoved(Objective &); // _ZN16ServerScoreboard18onObjectiveRemovedER9Objective
    virtual void onScoreChanged(ScoreboardId const&, Objective const&); // _ZN16ServerScoreboard14onScoreChangedERK12ScoreboardIdRK9Objective
    virtual void onPlayerScoreRemoved(ScoreboardId const&, Objective const&); // _ZN16ServerScoreboard20onPlayerScoreRemovedERK12ScoreboardIdRK9Objective
    virtual void onPlayerJoined(Player const&); // _ZN16ServerScoreboard14onPlayerJoinedERK6Player
    virtual void onPlayerIdentityUpdated(PlayerScoreboardId const&); // _ZN16ServerScoreboard23onPlayerIdentityUpdatedERK18PlayerScoreboardId
    virtual void tick(); // _ZN16ServerScoreboard4tickEv
    virtual void setPacketSender(PacketSender *); // _ZN16ServerScoreboard15setPacketSenderEP12PacketSender
    virtual void writeToLevelStorage(); // _ZN16ServerScoreboard19writeToLevelStorageEv
    virtual bool isClientSide()const; // _ZNK16ServerScoreboard12isClientSideEv
//  ServerScoreboard(ServerScoreboard::unit_test_ctor_t); //TODO: incomplete function definition // _ZN16ServerScoreboardC2ENS_16unit_test_ctor_tE
    ServerScoreboard(CommandSoftEnumRegistry, LevelStorage *); // _ZN16ServerScoreboardC2E23CommandSoftEnumRegistryP12LevelStorage
    void _readFromLevelStorage(); // _ZN16ServerScoreboard21_readFromLevelStorageEv
    void _setDirty(bool); // _ZN16ServerScoreboard9_setDirtyEb
    bool isTrackingObjective(Objective const&)const; // _ZNK16ServerScoreboard19isTrackingObjectiveERK9Objective
    void _notifyClearDisplayObjectiveCallback(std::string const&, DisplayObjective const&); // _ZN16ServerScoreboard36_notifyClearDisplayObjectiveCallbackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK16DisplayObjective
    void _stopTrackingObjective(Objective const&); // _ZN16ServerScoreboard22_stopTrackingObjectiveERK9Objective
    void _broadcast(Packet const&); // _ZN16ServerScoreboard10_broadcastERK6Packet
    void _notifyScoreChangedCallback(ScoreboardId const&); // _ZN16ServerScoreboard27_notifyScoreChangedCallbackERK12ScoreboardId
    void _notifyScoreRemovedCallback(ScoreboardId const&); // _ZN16ServerScoreboard27_notifyScoreRemovedCallbackERK12ScoreboardId
    void _notifyIdentityUpdatedCallback(ScoreboardId const&); // _ZN16ServerScoreboard30_notifyIdentityUpdatedCallbackERK12ScoreboardId
    void _notifySetDisplayObjectiveCallback(std::string const&, DisplayObjective const&); // _ZN16ServerScoreboard34_notifySetDisplayObjectiveCallbackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK16DisplayObjective
    void _startTrackingObjective(Objective const&); // _ZN16ServerScoreboard23_startTrackingObjectiveERK9Objective
    void _unpackIdentityDefToScorePacket(ScoreboardIdentityRef const&, std::string const&, int); // _ZN16ServerScoreboard31_unpackIdentityDefToScorePacketERK21ScoreboardIdentityRefRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _sendTo(NetworkIdentifier const&, unsigned char, Packet const&); // _ZN16ServerScoreboard7_sendToERK17NetworkIdentifierhRK6Packet
    void _isDirty()const; // _ZNK16ServerScoreboard8_isDirtyEv
    void _getNewScoreboardId(); // _ZN16ServerScoreboard19_getNewScoreboardIdEv
    void serialize()const; // _ZNK16ServerScoreboard9serializeEv
    void deserialize(std::unique_ptr<CompoundTag>); // _ZN16ServerScoreboard11deserializeESt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void setScoreChangedCallback(std::function<void (ScoreboardId const&)>); // _ZN16ServerScoreboard23setScoreChangedCallbackESt8functionIFvRK12ScoreboardIdEE
    void setScoreRemovedCallback(std::function<void (ScoreboardId const&)>); // _ZN16ServerScoreboard23setScoreRemovedCallbackESt8functionIFvRK12ScoreboardIdEE
    void setSetDisplayObjectiveCallback(std::function<void (std::string const&, DisplayObjective const&)>); // _ZN16ServerScoreboard30setSetDisplayObjectiveCallbackESt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK16DisplayObjectiveEE
    void setClearDisplayObjectiveCallback(std::function<void (std::string const&, DisplayObjective const&)>); // _ZN16ServerScoreboard32setClearDisplayObjectiveCallbackESt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK16DisplayObjectiveEE
    void setIdentityUpdatedCallback(std::function<void (ScoreboardId const&)>); // _ZN16ServerScoreboard26setIdentityUpdatedCallbackESt8functionIFvRK12ScoreboardIdEE
};
