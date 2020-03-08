#pragma once

#include "../../../unmapped/ScoreboardId"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../nbt/CompoundTag"
#include "../../command/CommandSoftEnumRegistry"
#include "../../actor/Player"
#include "../../../unmapped/Objective"
#include "../../network/packet/sender/PacketSender"
#include "../../actor/Actor"
#include "../../../unmapped/PlayerScoreboardId"
#include "../../../unmapped/ObjectiveCriteria"


class Scoreboard {

public:
    static long OBJECTIVES_ENUM;
    static long DISPLAY_SLOT_LIST[abi:cxx11];
    static long DISPLAY_SLOT_SIDEBAR[abi:cxx11];
    static long DISPLAY_SLOT_BELOWNAME[abi:cxx11];
    static long DEFAULT_CRITERIA[abi:cxx11];

    virtual Scoreboard::~Scoreboard()
    virtual void setDisplayObjective(std::string const&, Objective const&, ObjectiveSortOrder);
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
    void createObjectiveCriteria(std::string const&, bool, ObjectiveRenderType);
    void getCriteria(std::string const&)const;
    void getDisplayObjective(std::string const&)const;
    void getObjectives()const;
    void resetPlayerScore(ScoreboardId const&, Objective &);
    void shouldUpdateUI()const;
    void onUpdateUI();
    void modifyPlayerScore(bool &, ScoreboardId const&, Objective &, int, PlayerScoreSetFunction);
    void getScoreboardIdentityRef(ScoreboardId const&);
    void getDisplayInfoSorted(std::string const&, std::function<void ()(ObjectiveSortOrder, std::vector<PlayerScore, std::allocator<PlayerScore>> &)>)const;
    void getDisplayInfoFiltered(std::string const&)const;
    void getTrackedIds()const;
    void resetPlayerScore(ScoreboardId const&);
    bool hasIdentityFor(ScoreboardId const&)const;
    void applyPlayerOperation(bool &, std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, ScoreboardId const&, Objective &, std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, Objective &, CommandOperator);
    void _processOperation(bool &, CommandOperator, int, int);
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
    void _addLoadedObjective(std::unique_ptr<Objective, std::default_delete<Objective>>);
    void _addLoadedCriteria(std::unique_ptr<ObjectiveCriteria, std::default_delete<ObjectiveCriteria>>);
};
