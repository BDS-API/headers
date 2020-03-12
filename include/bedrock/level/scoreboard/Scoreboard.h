#pragma once

#include <memory>
#include <vector>
#include <string>
#include <functional>
#include "../../command/CommandSoftEnumRegistry.h"


class Scoreboard {

public:
    static long OBJECTIVES_ENUM;
    static std::string DISPLAY_SLOT_LIST;
    static std::string DISPLAY_SLOT_SIDEBAR;
    static std::string DISPLAY_SLOT_BELOWNAME;
    static std::string DEFAULT_CRITERIA;

    virtual void createScoreboardId(Actor const&);
    virtual void onObjectiveAdded(Objective const&);
    ~Scoreboard();
    virtual void setPacketSender(PacketSender *);
    virtual void createScoreboardId(std::string const&);
    virtual void onPlayerScoreRemoved(ScoreboardId const&, Objective const&);
    virtual void createScoreboardId(Player const&);
    virtual void tick();
    virtual bool isClientSide()const;
    virtual void onObjectiveRemoved(Objective &);
    virtual void onPlayerJoined(Player const&);
    virtual void clearDisplayObjective(std::string const&);
    virtual void onPlayerIdentityUpdated(PlayerScoreboardId const&);
//  virtual void setDisplayObjective(std::string const&, Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition
    virtual void writeToLevelStorage();
    virtual void onScoreChanged(ScoreboardId const&, Objective const&);
    void registerScoreboardIdentity(CompoundTag const&);
    void getDisplayObjective(std::string const&)const;
    void clearScoreboardIdentity(ScoreboardId const&);
    void removeObjective(Objective *);
    void getScoreboardIdentityRef(ScoreboardId const&)const;
    void onUpdateUI();
    void resetPlayerScore(ScoreboardId const&);
    bool isObjectiveDisplayed(Objective const&)const;
    void _initCriterias();
    std::string _getObjectiveMap()const;
    void registerScoreboardIdentity(ScoreboardId const&, std::string const&);
    void getObjective(std::string const&)const;
    void getAssociatedDisplaySlots(Objective const&)const;
    void getDisplayInfoSorted(std::string const&, std::function<void (ObjectiveSortOrder, std::vector<PlayerScore> &)>)const;
    void registerScoreboardIdentity(ScoreboardId const&, PlayerScoreboardId const&);
    void getScoreboardId(ActorUniqueID const&)const;
    void addObjective(std::string const&, std::string const&, ObjectiveCriteria const&);
    void getDisplayInfoFiltered(std::string const&)const;
//  void modifyPlayerScore(bool &, ScoreboardId const&, Objective &, int, PlayerScoreSetFunction); //TODO: incomplete function definition
    void getScoreboardIdentityRefs()const;
    void shouldUpdateUI()const;
    void getCriteria(std::string const&)const;
    void resetPlayerScore(ScoreboardId const&, Objective &);
    void getObjectives()const;
//  void createObjectiveCriteria(std::string const&, bool, ObjectiveRenderType); //TODO: incomplete function definition
    std::string getDisplayObjectiveSlotNames()const;
    void getNumTrackedIdentities()const;
    Scoreboard(CommandSoftEnumRegistry);
    bool hasIdentityFor(ScoreboardId const&)const;
    std::string getObjectiveNames()const;
    void _addLoadedObjective(std::unique_ptr<Objective>);
    void getTrackedIds()const;
    void shouldClearScoresOnDeath(Actor const&);
    void _init();
    void getScoreboardIdentityRef(ScoreboardId const&);
    void getIdScores(ScoreboardId const&)const;
    void getScoreboardId(Actor const&)const;
    void registerScoreboardIdentity(ScoreboardId const&, ActorUniqueID const&);
//  void applyPlayerOperation(bool &, std::vector<ScoreboardId> &, ScoreboardId const&, Objective &, std::vector<ScoreboardId> &, Objective &, CommandOperator); //TODO: incomplete function definition
//  void _processOperation(bool &, CommandOperator, int, int); //TODO: incomplete function definition
    void getScoreboardId(std::string const&)const;
    void replaceFakePlayer(ScoreboardId const&, PlayerScoreboardId const&);
    std::string _getCriteriaMap()const;
    std::string getCriteriaNames()const;
    void getScoreboardId(PlayerScoreboardId const&)const;
    void getScoreboardId(Player const&)const;
    void _addLoadedCriteria(std::unique_ptr<ObjectiveCriteria>);
};
