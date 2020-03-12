#pragma once

#include <string>
#include "../Command.h"
#include <vector>
#include <functional>


class ScoreboardCommand : Command {

public:
    class InitProxy;
    class SetScoreOutput;

    ~ScoreboardCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void addObjective(Scoreboard &, std::string const&, std::string const&, std::string const&, CommandOutput &)const;
    void setPlayerRandomScore(Scoreboard &, ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
//  void _isAction(ScoreboardCommand::Action)const; //TODO: incomplete function definition
    void _resolveObjectives(Scoreboard &, Objective *&, Objective *&, CommandOutput &)const;
    ScoreboardCommand();
    void objectives(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void listPlayers(Scoreboard &, ScoreboardId const&, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
    void setup(CommandRegistry &, ScoreboardCommand::InitProxy &&);
//  void _getSelectorResultsForObjective(std::vector<ScoreboardId> &, Scoreboard &, WildcardCommandSelector<Actor> const&, Objective &, CommandOrigin const&, CommandOutput &, bool)const; //TODO: incomplete function definition
    void removeObjective(Scoreboard &, std::string const&, CommandOutput &)const;
//  void _isOperation(CommandOperator)const; //TODO: incomplete function definition
    void testPlayerScore(ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
    void _isMutableAction()const;
//  void setDisplayObjective(Scoreboard &, std::string const&, std::string const&, ObjectiveSortOrder, CommandOutput &)const; //TODO: incomplete function definition
//  void addPlayerScore(Scoreboard &, PlayerScoreSetFunction, ScoreboardId const&, Objective &, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const; //TODO: incomplete function definition
    std::string _getSortableDisplaySlots(Scoreboard &);
    void listObjectives(Scoreboard const&, CommandOutput &)const;
//  void _getScoreboardIdsForSelector(Scoreboard &, WildcardCommandSelector<Actor> const&, CommandOrigin const&, CommandOutput &, bool)const; //TODO: incomplete function definition
    void resetPlayer(Scoreboard &, ScoreboardId const&, Objective *, std::function<std::string const& (ActorUniqueID)> const&, CommandOutput &)const;
    void players(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void applyPlayerOperation(Scoreboard &, std::function<std::string const& (ActorUniqueID)> const&, ScoreboardId const&, Objective &, Objective &, CommandOrigin const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void _generateCumulativeOutput(ScoreboardCommand::SetScoreOutput const&, Objective const&, CommandOutput &)const;
    void _getObjective(Scoreboard const&, std::string const&, bool, CommandOutput &)const;
    std::string _getNonSortableDisplaySlots(Scoreboard &);
    class InitProxy {

    public:
        void getScoreboard();
        InitProxy(Scoreboard &);
        InitProxy(ServerLevel &);
    };
    class SetScoreOutput {

    public:
        SetScoreOutput();
        ~SetScoreOutput();
    };
};
