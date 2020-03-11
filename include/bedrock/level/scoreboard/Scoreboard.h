#pragma once

#include "../../../unmapped/ObjectiveCriteria.h"
#include "../../nbt/CompoundTag.h"
#include <string>
#include "../../actor/Actor.h"
#include <memory>
#include "../../../unmapped/PlayerScoreboardId.h"
#include "../../../unmapped/Objective.h"
#include "../../../unmapped/PlayerScore.h"
#include "../../../unmapped/ScoreboardId.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <vector>
#include "../../network/packet/sender/PacketSender.h"
#include <functional>
#include "../../command/CommandSoftEnumRegistry.h"
#include "../../actor/Player.h"


class Scoreboard {

public:
    static long OBJECTIVES_ENUM;
    static std::string DISPLAY_SLOT_LIST;
    static std::string DISPLAY_SLOT_SIDEBAR;
    static std::string DISPLAY_SLOT_BELOWNAME;
    static std::string DEFAULT_CRITERIA;

    virtual ~Scoreboard();
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

    Scoreboard(CommandSoftEnumRegistry);
    void _init();
    void getObjective(std::string const&)const;
    void addObjective(std::string const&, std::string const&, ObjectiveCriteria const&);
    void removeObjective(Objective *);
//  void createObjectiveCriteria(std::string const&, bool, ObjectiveRenderType); //TODO: incomplete function definition
    void getCriteria(std::string const&)const;
    std::string getCriteriaNames()const;
    void getDisplayObjective(std::string const&)const;
    void getObjectives()const;
    std::string getObjectiveNames()const;
    std::string getDisplayObjectiveSlotNames()const;
    void resetPlayerScore(ScoreboardId const&, Objective &);
    void shouldUpdateUI()const;
    void onUpdateUI();
//  void modifyPlayerScore(bool &, ScoreboardId const&, Objective &, int, PlayerScoreSetFunction); //TODO: incomplete function definition
    void getScoreboardIdentityRef(ScoreboardId const&);
//  void getDisplayInfoSorted(std::string const&, std::function<void (ObjectiveSortOrder, std::vector<PlayerScore, std::allocator<PlayerScore>> &)>)const; //TODO: incomplete function definition
    void getDisplayInfoFiltered(std::string const&)const;
    void getTrackedIds()const;
    void resetPlayerScore(ScoreboardId const&);
    bool hasIdentityFor(ScoreboardId const&)const;
//  void applyPlayerOperation(bool &, std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, ScoreboardId const&, Objective &, std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, Objective &, CommandOperator); //TODO: incomplete function definition
//  void _processOperation(bool &, CommandOperator, int, int); //TODO: incomplete function definition
    void getIdScores(ScoreboardId const&)const;
    void getScoreboardIdentityRefs()const;
    void registerScoreboardIdentity(ScoreboardId const&, PlayerScoreboardId const&);
    void registerScoreboardIdentity(ScoreboardId const&, ActorUniqueID const&);
    void registerScoreboardIdentity(ScoreboardId const&, std::string const&);
    void registerScoreboardIdentity(CompoundTag const&);
    void clearScoreboardIdentity(ScoreboardId const&);
    void getScoreboardId(Player const&)const;
    void getScoreboardId(Actor const&)const;
    void getScoreboardId(ActorUniqueID const&)const;
    void getScoreboardId(PlayerScoreboardId const&)const;
    void getScoreboardId(std::string const&)const;
    void replaceFakePlayer(ScoreboardId const&, PlayerScoreboardId const&);
    void getNumTrackedIdentities()const;
    void getScoreboardIdentityRef(ScoreboardId const&)const;
    bool isObjectiveDisplayed(Objective const&)const;
    void getAssociatedDisplaySlots(Objective const&)const;
    void shouldClearScoresOnDeath(Actor const&);
    void _initCriterias();
    std::string _getObjectiveMap()const;
    std::string _getCriteriaMap()const;
    void _addLoadedObjective(std::unique_ptr<Objective, std::default_delete<Objective>>);
    void _addLoadedCriteria(std::unique_ptr<ObjectiveCriteria, std::default_delete<ObjectiveCriteria>>);
};
