#pragma once

#include "../../../unmapped/InitProxy"
#include "../../../unmapped/ScoreboardId"
#include "../Command"
#include "../CommandRegistry"
#include "../../level/scoreboard/Scoreboard"
#include "../../../unmapped/Objective"
#include "../../actor/Actor"
#include "../CommandOutput"
#include "../orgin/CommandOrigin"
#include "../../../unmapped/SetScoreOutput"


class ScoreboardCommand : Command {

public:
    virtual ScoreboardCommand::~ScoreboardCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, ScoreboardCommand::InitProxy &&);
    ScoreboardCommand(void);
    void objectives(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void players(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void addObjective(Scoreboard &, std::string const&, std::string const&, std::string const&, CommandOutput &)const;
    void removeObjective(Scoreboard &, std::string const&, CommandOutput &)const;
    void listObjectives(Scoreboard const&, CommandOutput &)const;
    void setDisplayObjective(Scoreboard &, std::string const&, std::string const&, ObjectiveSortOrder, CommandOutput &)const;
    void _getObjective(Scoreboard const&, std::string const&, bool, CommandOutput &)const;
    void _resolveObjectives(Scoreboard &, Objective *&, Objective *&, CommandOutput &)const;
    void _isAction(ScoreboardCommand::Action)const;
    void _getScoreboardIdsForSelector(Scoreboard &, WildcardCommandSelector<Actor> const&, CommandOrigin const&, CommandOutput &, bool)const;
    void _isMutableAction()const;
    void listPlayers(Scoreboard &, ScoreboardId const&, std::function<std::string ()(ActorUniqueID)> const&, CommandOutput &)const;
    void addPlayerScore(Scoreboard &, PlayerScoreSetFunction, ScoreboardId const&, Objective &, std::function<std::string ()(ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void resetPlayer(Scoreboard &, ScoreboardId const&, Objective *, std::function<std::string ()(ActorUniqueID)> const&, CommandOutput &)const;
    void testPlayerScore(ScoreboardId const&, Objective &, std::function<std::string ()(ActorUniqueID)> const&, CommandOutput &)const;
    void setPlayerRandomScore(Scoreboard &, ScoreboardId const&, Objective &, std::function<std::string ()(ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void applyPlayerOperation(Scoreboard &, std::function<std::string ()(ActorUniqueID)> const&, ScoreboardId const&, Objective &, Objective &, CommandOrigin const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void _generateCumulativeOutput(ScoreboardCommand::SetScoreOutput const&, Objective const&, CommandOutput &)const;
    void _getSelectorResultsForObjective(std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, Scoreboard &, WildcardCommandSelector<Actor> const&, Objective &, CommandOrigin const&, CommandOutput &, bool)const;
    void _isOperation(CommandOperator)const;
};
