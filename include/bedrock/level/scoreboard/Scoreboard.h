#pragma once

#include <vector>
#include <memory>
#include "../../command/CommandSoftEnumRegistry.h"
#include <string>
#include <functional>


class Scoreboard {

public:
    static long OBJECTIVES_ENUM;
    static std::string DISPLAY_SLOT_LIST;
    static std::string DISPLAY_SLOT_SIDEBAR;
    static std::string DISPLAY_SLOT_BELOWNAME;
    static std::string DEFAULT_CRITERIA;

    ~Scoreboard(); // _ZN10ScoreboardD2Ev
//  virtual void setDisplayObjective(std::string const&, Objective const&, ObjectiveSortOrder); //TODO: incomplete function definition // _ZN10Scoreboard19setDisplayObjectiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK9Objective18ObjectiveSortOrder
    virtual void clearDisplayObjective(std::string const&); // _ZN10Scoreboard21clearDisplayObjectiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void createScoreboardId(Player const&); // _ZN10Scoreboard18createScoreboardIdERK6Player
    virtual void createScoreboardId(Actor const&); // _ZN10Scoreboard18createScoreboardIdERK5Actor
    virtual void createScoreboardId(std::string const&); // _ZN10Scoreboard18createScoreboardIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onObjectiveAdded(Objective const&); // _ZN10Scoreboard16onObjectiveAddedERK9Objective
    virtual void onObjectiveRemoved(Objective &); // _ZN10Scoreboard18onObjectiveRemovedER9Objective
    virtual void onScoreChanged(ScoreboardId const&, Objective const&); // _ZN10Scoreboard14onScoreChangedERK12ScoreboardIdRK9Objective
    virtual void onPlayerScoreRemoved(ScoreboardId const&, Objective const&); // _ZN10Scoreboard20onPlayerScoreRemovedERK12ScoreboardIdRK9Objective
    virtual void onPlayerJoined(Player const&); // _ZN10Scoreboard14onPlayerJoinedERK6Player
    virtual void onPlayerIdentityUpdated(PlayerScoreboardId const&); // _ZN10Scoreboard23onPlayerIdentityUpdatedERK18PlayerScoreboardId
    virtual void tick(); // _ZN10Scoreboard4tickEv
    virtual void setPacketSender(PacketSender *); // _ZN10Scoreboard15setPacketSenderEP12PacketSender
    virtual void writeToLevelStorage(); // _ZN10Scoreboard19writeToLevelStorageEv
    virtual bool isClientSide()const; // _ZNK10Scoreboard12isClientSideEv
    Scoreboard(CommandSoftEnumRegistry); // _ZN10ScoreboardC2E23CommandSoftEnumRegistry
    void _init(); // _ZN10Scoreboard5_initEv
    void getObjective(std::string const&)const; // _ZNK10Scoreboard12getObjectiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addObjective(std::string const&, std::string const&, ObjectiveCriteria const&); // _ZN10Scoreboard12addObjectiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RK17ObjectiveCriteria
    void removeObjective(Objective *); // _ZN10Scoreboard15removeObjectiveEP9Objective
//  void createObjectiveCriteria(std::string const&, bool, ObjectiveRenderType); //TODO: incomplete function definition // _ZN10Scoreboard23createObjectiveCriteriaERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb19ObjectiveRenderType
    void getCriteria(std::string const&)const; // _ZNK10Scoreboard11getCriteriaERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getCriteriaNames()const; // _ZNK10Scoreboard16getCriteriaNamesB5cxx11Ev
    void getDisplayObjective(std::string const&)const; // _ZNK10Scoreboard19getDisplayObjectiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getObjectives()const; // _ZNK10Scoreboard13getObjectivesEv
    std::string getObjectiveNames()const; // _ZNK10Scoreboard17getObjectiveNamesB5cxx11Ev
    std::string getDisplayObjectiveSlotNames()const; // _ZNK10Scoreboard28getDisplayObjectiveSlotNamesB5cxx11Ev
    void resetPlayerScore(ScoreboardId const&, Objective &); // _ZN10Scoreboard16resetPlayerScoreERK12ScoreboardIdR9Objective
    void shouldUpdateUI()const; // _ZNK10Scoreboard14shouldUpdateUIEv
    void onUpdateUI(); // _ZN10Scoreboard10onUpdateUIEv
//  void modifyPlayerScore(bool &, ScoreboardId const&, Objective &, int, PlayerScoreSetFunction); //TODO: incomplete function definition // _ZN10Scoreboard17modifyPlayerScoreERbRK12ScoreboardIdR9Objectivei22PlayerScoreSetFunction
    void getScoreboardIdentityRef(ScoreboardId const&); // _ZN10Scoreboard24getScoreboardIdentityRefERK12ScoreboardId
    void getDisplayInfoSorted(std::string const&, std::function<void (ObjectiveSortOrder, std::vector<PlayerScore> &)>)const; // _ZNK10Scoreboard20getDisplayInfoSortedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt8functionIFv18ObjectiveSortOrderRSt6vectorI11PlayerScoreSaISB_EEEE
    void getDisplayInfoFiltered(std::string const&)const; // _ZNK10Scoreboard22getDisplayInfoFilteredERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getTrackedIds()const; // _ZNK10Scoreboard13getTrackedIdsEv
    void resetPlayerScore(ScoreboardId const&); // _ZN10Scoreboard16resetPlayerScoreERK12ScoreboardId
    bool hasIdentityFor(ScoreboardId const&)const; // _ZNK10Scoreboard14hasIdentityForERK12ScoreboardId
//  void applyPlayerOperation(bool &, std::vector<ScoreboardId> &, ScoreboardId const&, Objective &, std::vector<ScoreboardId> &, Objective &, CommandOperator); //TODO: incomplete function definition // _ZN10Scoreboard20applyPlayerOperationERbRSt6vectorI12ScoreboardIdSaIS2_EERKS2_R9ObjectiveS5_S9_15CommandOperator
//  void _processOperation(bool &, CommandOperator, int, int); //TODO: incomplete function definition // _ZN10Scoreboard17_processOperationERb15CommandOperatorii
    void getIdScores(ScoreboardId const&)const; // _ZNK10Scoreboard11getIdScoresERK12ScoreboardId
    void getScoreboardIdentityRefs()const; // _ZNK10Scoreboard25getScoreboardIdentityRefsEv
    void registerScoreboardIdentity(ScoreboardId const&, PlayerScoreboardId const&); // _ZN10Scoreboard26registerScoreboardIdentityERK12ScoreboardIdRK18PlayerScoreboardId
    void registerScoreboardIdentity(ScoreboardId const&, ActorUniqueID const&); // _ZN10Scoreboard26registerScoreboardIdentityERK12ScoreboardIdRK13ActorUniqueID
    void registerScoreboardIdentity(ScoreboardId const&, std::string const&); // _ZN10Scoreboard26registerScoreboardIdentityERK12ScoreboardIdRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void registerScoreboardIdentity(CompoundTag const&); // _ZN10Scoreboard26registerScoreboardIdentityERK11CompoundTag
    void clearScoreboardIdentity(ScoreboardId const&); // _ZN10Scoreboard23clearScoreboardIdentityERK12ScoreboardId
    void getScoreboardId(Player const&)const; // _ZNK10Scoreboard15getScoreboardIdERK6Player
    void getScoreboardId(Actor const&)const; // _ZNK10Scoreboard15getScoreboardIdERK5Actor
    void getScoreboardId(ActorUniqueID const&)const; // _ZNK10Scoreboard15getScoreboardIdERK13ActorUniqueID
    void getScoreboardId(PlayerScoreboardId const&)const; // _ZNK10Scoreboard15getScoreboardIdERK18PlayerScoreboardId
    void getScoreboardId(std::string const&)const; // _ZNK10Scoreboard15getScoreboardIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void replaceFakePlayer(ScoreboardId const&, PlayerScoreboardId const&); // _ZN10Scoreboard17replaceFakePlayerERK12ScoreboardIdRK18PlayerScoreboardId
    void getNumTrackedIdentities()const; // _ZNK10Scoreboard23getNumTrackedIdentitiesEv
    void getScoreboardIdentityRef(ScoreboardId const&)const; // _ZNK10Scoreboard24getScoreboardIdentityRefERK12ScoreboardId
    bool isObjectiveDisplayed(Objective const&)const; // _ZNK10Scoreboard20isObjectiveDisplayedERK9Objective
    void getAssociatedDisplaySlots(Objective const&)const; // _ZNK10Scoreboard25getAssociatedDisplaySlotsERK9Objective
    void shouldClearScoresOnDeath(Actor const&); // _ZN10Scoreboard24shouldClearScoresOnDeathERK5Actor
    void _initCriterias(); // _ZN10Scoreboard14_initCriteriasEv
    std::string _getObjectiveMap()const; // _ZNK10Scoreboard16_getObjectiveMapB5cxx11Ev
    std::string _getCriteriaMap()const; // _ZNK10Scoreboard15_getCriteriaMapB5cxx11Ev
    void _addLoadedObjective(std::unique_ptr<Objective>); // _ZN10Scoreboard19_addLoadedObjectiveESt10unique_ptrI9ObjectiveSt14default_deleteIS1_EE
    void _addLoadedCriteria(std::unique_ptr<ObjectiveCriteria>); // _ZN10Scoreboard18_addLoadedCriteriaESt10unique_ptrI17ObjectiveCriteriaSt14default_deleteIS1_EE
};
