#pragma once

#include <string>
#include <functional>
#include "../Command.h"
#include <vector>


class ScoreboardCommand : Command {

public:
    class InitProxy;
    class SetScoreOutput;

    ~ScoreboardCommand(); // _ZN17ScoreboardCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK17ScoreboardCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &, ScoreboardCommand::InitProxy &&); // _ZN17ScoreboardCommand5setupER15CommandRegistryONS_9InitProxyE
    std::string _getSortableDisplaySlots(Scoreboard &); // _ZN17ScoreboardCommand24_getSortableDisplaySlotsB5cxx11ER10Scoreboard
    std::string _getNonSortableDisplaySlots(Scoreboard &); // _ZN17ScoreboardCommand27_getNonSortableDisplaySlotsB5cxx11ER10Scoreboard
    ScoreboardCommand(); // _ZN17ScoreboardCommandC2Ev
    void objectives(Scoreboard &, CommandOrigin const&, CommandOutput &)const; // _ZNK17ScoreboardCommand10objectivesER10ScoreboardRK13CommandOriginR13CommandOutput
    void players(Scoreboard &, CommandOrigin const&, CommandOutput &)const; // _ZNK17ScoreboardCommand7playersER10ScoreboardRK13CommandOriginR13CommandOutput
    void addObjective(Scoreboard &, std::string const&, std::string const&, std::string const&, CommandOutput &)const; // _ZNK17ScoreboardCommand12addObjectiveER10ScoreboardRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_S9_R13CommandOutput
    void removeObjective(Scoreboard &, std::string const&, CommandOutput &)const; // _ZNK17ScoreboardCommand15removeObjectiveER10ScoreboardRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER13CommandOutput
    void listObjectives(Scoreboard const&, CommandOutput &)const; // _ZNK17ScoreboardCommand14listObjectivesERK10ScoreboardR13CommandOutput
//  void setDisplayObjective(Scoreboard &, std::string const&, std::string const&, ObjectiveSortOrder, CommandOutput &)const; //TODO: incomplete function definition // _ZNK17ScoreboardCommand19setDisplayObjectiveER10ScoreboardRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_18ObjectiveSortOrderR13CommandOutput
    void _getObjective(Scoreboard const&, std::string const&, bool, CommandOutput &)const; // _ZNK17ScoreboardCommand13_getObjectiveERK10ScoreboardRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbR13CommandOutput
    void _resolveObjectives(Scoreboard &, Objective *&, Objective *&, CommandOutput &)const; // _ZNK17ScoreboardCommand18_resolveObjectivesER10ScoreboardRP9ObjectiveS4_R13CommandOutput
//  void _isAction(ScoreboardCommand::Action)const; //TODO: incomplete function definition // _ZNK17ScoreboardCommand9_isActionENS_6ActionE
//  void _getScoreboardIdsForSelector(Scoreboard &, WildcardCommandSelector<Actor> const&, CommandOrigin const&, CommandOutput &, bool)const; //TODO: incomplete function definition // _ZNK17ScoreboardCommand28_getScoreboardIdsForSelectorER10ScoreboardRK23WildcardCommandSelectorI5ActorERK13CommandOriginR13CommandOutputb
    void _isMutableAction()const; // _ZNK17ScoreboardCommand16_isMutableActionEv
    void listPlayers(Scoreboard &, ScoreboardId const&, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const; // _ZNK17ScoreboardCommand11listPlayersER10ScoreboardRK12ScoreboardIdRKSt8functionIFRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDEER13CommandOutput
//  void addPlayerScore(Scoreboard &, PlayerScoreSetFunction, ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const; //TODO: incomplete function definition // _ZNK17ScoreboardCommand14addPlayerScoreER10Scoreboard22PlayerScoreSetFunctionRK12ScoreboardIdR9ObjectiveRKSt8functionIFRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDEER13CommandOutputRNS_14SetScoreOutputE
    void resetPlayer(Scoreboard &, ScoreboardId const&, Objective *, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const; // _ZNK17ScoreboardCommand11resetPlayerER10ScoreboardRK12ScoreboardIdP9ObjectiveRKSt8functionIFRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDEER13CommandOutput
    void testPlayerScore(ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const; // _ZNK17ScoreboardCommand15testPlayerScoreERK12ScoreboardIdR9ObjectiveRKSt8functionIFRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDEER13CommandOutput
    void setPlayerRandomScore(Scoreboard &, ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const; // _ZNK17ScoreboardCommand20setPlayerRandomScoreER10ScoreboardRK12ScoreboardIdR9ObjectiveRKSt8functionIFRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDEER13CommandOutputRNS_14SetScoreOutputE
    void applyPlayerOperation(Scoreboard &, std::function<std::string const& (ActorUniqueID)> const&, ScoreboardId const&, Objective &, Objective &, CommandOrigin const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const; // _ZNK17ScoreboardCommand20applyPlayerOperationER10ScoreboardRKSt8functionIFRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDEERK12ScoreboardIdR9ObjectiveSK_RK13CommandOriginR13CommandOutputRNS_14SetScoreOutputE
    void _generateCumulativeOutput(ScoreboardCommand::SetScoreOutput const&, Objective const&, CommandOutput &)const; // _ZNK17ScoreboardCommand25_generateCumulativeOutputERKNS_14SetScoreOutputERK9ObjectiveR13CommandOutput
//  void _getSelectorResultsForObjective(std::vector<ScoreboardId> &, Scoreboard &, WildcardCommandSelector<Actor> const&, Objective &, CommandOrigin const&, CommandOutput &, bool)const; //TODO: incomplete function definition // _ZNK17ScoreboardCommand31_getSelectorResultsForObjectiveERSt6vectorI12ScoreboardIdSaIS1_EER10ScoreboardRK23WildcardCommandSelectorI5ActorER9ObjectiveRK13CommandOriginR13CommandOutputb
//  void _isOperation(CommandOperator)const; //TODO: incomplete function definition // _ZNK17ScoreboardCommand12_isOperationE15CommandOperator
    class InitProxy {

    public:
        InitProxy(ServerLevel &); // _ZN17ScoreboardCommand9InitProxyC2ER11ServerLevel
        InitProxy(Scoreboard &); // _ZN17ScoreboardCommand9InitProxyC2ER10Scoreboard
        void getScoreboard(); // _ZN17ScoreboardCommand9InitProxy13getScoreboardEv
    };
    class SetScoreOutput {

    public:
        SetScoreOutput(); // _ZN17ScoreboardCommand14SetScoreOutputC2Ev
        ~SetScoreOutput(); // _ZN17ScoreboardCommand14SetScoreOutputD2Ev
    };
};
