#pragma once

#include "../../command/CommandSoftEnumRegistry.h"
#include <string>
#include "../../../unmapped/ScoreboardId.h"
#include "../../../unmapped/PlayerScore.h"
#include "../../network/packet/sender/PacketSender.h"
#include "../../../unmapped/PlayerScoreboardId.h"
#include "../../nbt/CompoundTag.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/Actor.h"
#include <functional>
#include "../../../unmapped/ObjectiveCriteria.h"
#include <vector>
#include <memory>
#include "../../../unmapped/Objective.h"
#include "../../actor/Player.h"


class Scoreboard {

public:
    static long OBJECTIVES_ENUM;
    static std::string DISPLAY_SLOT_LIST;
    static std::string DISPLAY_SLOT_SIDEBAR;
    static std::string DISPLAY_SLOT_BELOWNAME;
    static std::string DEFAULT_CRITERIA;

    virtual void writeToLevelStorage();
    virtual void onScoreChanged(ScoreboardId const&, Objective const&);
    virtual void setPacketSender(PacketSender *);
    virtual void createScoreboardId(Player const&);
    virtual void onPlayerScoreRemoved(ScoreboardId const&, Objective const&);
    virtual void createScoreboardId(std::string const&);
    ~Scoreboard();
//  virtual void setDisplayObjective(std::string const&, Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition
    virtual void onObjectiveAdded(Objective const&);
    virtual bool isClientSide()const;
    virtual void tick();
    virtual void createScoreboardId(Actor const&);
    virtual void onPlayerIdentityUpdated(PlayerScoreboardId const&);
    virtual void clearDisplayObjective(std::string const&);
    virtual void onObjectiveRemoved(Objective &);
    virtual void onPlayerJoined(Player const&);
    void getAssociatedDisplaySlots(Objective const&)const;
    void getObjective(std::string const&)const;
//  void applyPlayerOperation(bool &, std::vector<ScoreboardId> &, ScoreboardId const&, Objective &, std::vector<ScoreboardId> &, Objective &, CommandOperator); //TODO: incomplete function definition
    void registerScoreboardIdentity(ScoreboardId const&, std::string const&);
    void getDisplayInfoFiltered(std::string const&)const;
    void _init();
    void getScoreboardIdentityRef(ScoreboardId const&);
    void registerScoreboardIdentity(CompoundTag const&);
    std::string _getCriteriaMap()const;
    bool isObjectiveDisplayed(Objective const&)const;
    void getDisplayObjective(std::string const&)const;
    void getTrackedIds()const;
    void getScoreboardIdentityRefs()const;
    void getScoreboardId(Player const&)const;
    void getScoreboardId(Actor const&)const;
    void getNumTrackedIdentities()const;
    void getScoreboardId(ActorUniqueID const&)const;
//  void getDisplayInfoSorted(std::string const&, std::function<void (ObjectiveSortOrder, std::vector<PlayerScore> &)>)const; //TODO: incomplete function definition
    std::string getDisplayObjectiveSlotNames()const;
    void resetPlayerScore(ScoreboardId const&, Objective &);
    void removeObjective(Objective *);
//  void _processOperation(bool &, CommandOperator, int, int); //TODO: incomplete function definition
    void getCriteria(std::string const&)const;
    void replaceFakePlayer(ScoreboardId const&, PlayerScoreboardId const&);
    void getScoreboardId(PlayerScoreboardId const&)const;
    std::string getObjectiveNames()const;
    void registerScoreboardIdentity(ScoreboardId const&, PlayerScoreboardId const&);
    void _initCriterias();
    Scoreboard(CommandSoftEnumRegistry);
    bool hasIdentityFor(ScoreboardId const&)const;
    void onUpdateUI();
    void getObjectives()const;
    void _addLoadedObjective(std::unique_ptr<Objective>);
    void shouldClearScoresOnDeath(Actor const&);
    void getScoreboardIdentityRef(ScoreboardId const&)const;
    void shouldUpdateUI()const;
    std::string _getObjectiveMap()const;
    void clearScoreboardIdentity(ScoreboardId const&);
    void addObjective(std::string const&, std::string const&, ObjectiveCriteria const&);
    void registerScoreboardIdentity(ScoreboardId const&, ActorUniqueID const&);
    void _addLoadedCriteria(std::unique_ptr<ObjectiveCriteria>);
    std::string getCriteriaNames()const;
    void getIdScores(ScoreboardId const&)const;
//  void createObjectiveCriteria(std::string const&, bool, ObjectiveRenderType); //TODO: incomplete function definition
    void getScoreboardId(std::string const&)const;
    void resetPlayerScore(ScoreboardId const&);
//  void modifyPlayerScore(bool &, ScoreboardId const&, Objective &, int, PlayerScoreSetFunction); //TODO: incomplete function definition
};
