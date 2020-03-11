#pragma once

#include "../CommandRegistry.h"
#include "../../../unmapped/InitProxy.h"
#include "../CommandOutput.h"
#include "../../actor/Actor.h"
#include "../../level/scoreboard/Scoreboard.h"
#include <memory>
#include "../orgin/CommandOrigin.h"
#include "../../../unmapped/Objective.h"
#include "../../../unmapped/SetScoreOutput.h"
#include "../../../unmapped/ScoreboardId.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <vector>
#include <functional>
#include "../Command.h"
#include <string>


class ScoreboardCommand : Command {

public:
    virtual ~ScoreboardCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, ScoreboardCommand::InitProxy &&);
    std::string _getSortableDisplaySlots(Scoreboard &);
    std::string _getNonSortableDisplaySlots(Scoreboard &);
    ScoreboardCommand();
    void objectives(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void players(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void addObjective(Scoreboard &, std::string const&, std::string const&, std::string const&, CommandOutput &)const;
    void removeObjective(Scoreboard &, std::string const&, CommandOutput &)const;
    void listObjectives(Scoreboard const&, CommandOutput &)const;
//  void setDisplayObjective(Scoreboard &, std::string const&, std::string const&, ObjectiveSortOrder, CommandOutput &)const; //TODO: incomplete function definition
    void _getObjective(Scoreboard const&, std::string const&, bool, CommandOutput &)const;
    void _resolveObjectives(Scoreboard &, Objective *&, Objective *&, CommandOutput &)const;
//  void _isAction(ScoreboardCommand::Action)const; //TODO: incomplete function definition
//  void _getScoreboardIdsForSelector(Scoreboard &, WildcardCommandSelector<Actor> const&, CommandOrigin const&, CommandOutput &, bool)const; //TODO: incomplete function definition
    void _isMutableAction()const;
    void listPlayers(Scoreboard &, ScoreboardId const&, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
//  void addPlayerScore(Scoreboard &, PlayerScoreSetFunction, ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const; //TODO: incomplete function definition
    void resetPlayer(Scoreboard &, ScoreboardId const&, Objective *, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
    void testPlayerScore(ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
    void setPlayerRandomScore(Scoreboard &, ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void applyPlayerOperation(Scoreboard &, std::function<std::string const& (ActorUniqueID)> const&, ScoreboardId const&, Objective &, Objective &, CommandOrigin const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void _generateCumulativeOutput(ScoreboardCommand::SetScoreOutput const&, Objective const&, CommandOutput &)const;
//  void _getSelectorResultsForObjective(std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, Scoreboard &, WildcardCommandSelector<Actor> const&, Objective &, CommandOrigin const&, CommandOutput &, bool)const; //TODO: incomplete function definition
//  void _isOperation(CommandOperator)const; //TODO: incomplete function definition
};
