#pragma once

#include <string>
#include "../../level/ServerLevel.h"
#include "../../../unmapped/ScoreboardId.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../../../unmapped/Objective.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/Actor.h"
#include "../../level/scoreboard/Scoreboard.h"
#include <vector>
#include <functional>
#include "../Command.h"
#include "../CommandOutput.h"


class ScoreboardCommand : Command {

public:
    class InitProxy;
    class SetScoreOutput;

    ~ScoreboardCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void listObjectives(Scoreboard const&, CommandOutput &)const;
    ScoreboardCommand();
//  void _getSelectorResultsForObjective(std::vector<ScoreboardId> &, Scoreboard &, WildcardCommandSelector<Actor> const&, Objective &, CommandOrigin const&, CommandOutput &, bool)const; //TODO: incomplete function definition
//  void _isOperation(CommandOperator)const; //TODO: incomplete function definition
//  void _getScoreboardIdsForSelector(Scoreboard &, WildcardCommandSelector<Actor> const&, CommandOrigin const&, CommandOutput &, bool)const; //TODO: incomplete function definition
    void players(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void setPlayerRandomScore(Scoreboard &, ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    std::string _getNonSortableDisplaySlots(Scoreboard &);
//  void _isAction(ScoreboardCommand::Action)const; //TODO: incomplete function definition
//  void setDisplayObjective(Scoreboard &, std::string const&, std::string const&, ObjectiveSortOrder, CommandOutput &)const; //TODO: incomplete function definition
    void testPlayerScore(ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
    void removeObjective(Scoreboard &, std::string const&, CommandOutput &)const;
    void _isMutableAction()const;
    void applyPlayerOperation(Scoreboard &, std::function<std::string const& (ActorUniqueID)> const&, ScoreboardId const&, Objective &, Objective &, CommandOrigin const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void _resolveObjectives(Scoreboard &, Objective *&, Objective *&, CommandOutput &)const;
    void addObjective(Scoreboard &, std::string const&, std::string const&, std::string const&, CommandOutput &)const;
    void resetPlayer(Scoreboard &, ScoreboardId const&, Objective *, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
    void _generateCumulativeOutput(ScoreboardCommand::SetScoreOutput const&, Objective const&, CommandOutput &)const;
    void listPlayers(Scoreboard &, ScoreboardId const&, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
    std::string _getSortableDisplaySlots(Scoreboard &);
    void _getObjective(Scoreboard const&, std::string const&, bool, CommandOutput &)const;
//  void addPlayerScore(Scoreboard &, PlayerScoreSetFunction, ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const; //TODO: incomplete function definition
    void setup(CommandRegistry &, ScoreboardCommand::InitProxy &&);
    void objectives(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    class InitProxy {

    public:
        InitProxy(ServerLevel &);
        InitProxy(Scoreboard &);
        void getScoreboard();
    };
    class SetScoreOutput {

    public:
        SetScoreOutput();
        ~SetScoreOutput();
    };
};
