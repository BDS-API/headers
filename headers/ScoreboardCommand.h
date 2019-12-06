#pragma once

class ScoreboardCommand : Command {

public:
    virtual ~ScoreboardCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, ScoreboardCommand::InitProxy &&);
    void ScoreboardCommand(void);
    void objectives(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void players(Scoreboard &, CommandOrigin const&, CommandOutput &)const;
    void addObjective(Scoreboard &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CommandOutput &)const;
    void removeObjective(Scoreboard &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CommandOutput &)const;
    void listObjectives(Scoreboard const&, CommandOutput &)const;
    void setDisplayObjective(Scoreboard &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ObjectiveSortOrder, CommandOutput &)const;
    void _getObjective(Scoreboard const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, CommandOutput &)const;
    void _resolveObjectives(Scoreboard &, Objective *&, Objective *&, CommandOutput &)const;
    void _isAction(ScoreboardCommand::Action)const;
    void _getScoreboardIdsForSelector(Scoreboard &, WildcardCommandSelector<Actor> const&, CommandOrigin const&, CommandOutput &, bool)const;
    void _isMutableAction(void)const;
    void listPlayers(Scoreboard &, ScoreboardId const&, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const& ()(ActorUniqueID)> const&, CommandOutput &)const;
    void addPlayerScore(Scoreboard &, PlayerScoreSetFunction, ScoreboardId const&, Objective &, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const& ()(ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void resetPlayer(Scoreboard &, ScoreboardId const&, Objective *, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const& ()(ActorUniqueID)> const&, CommandOutput &)const;
    void testPlayerScore(ScoreboardId const&, Objective &, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const& ()(ActorUniqueID)> const&, CommandOutput &)const;
    void setPlayerRandomScore(Scoreboard &, ScoreboardId const&, Objective &, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const& ()(ActorUniqueID)> const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void applyPlayerOperation(Scoreboard &, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const& ()(ActorUniqueID)> const&, ScoreboardId const&, Objective &, Objective &, CommandOrigin const&, CommandOutput &, ScoreboardCommand::SetScoreOutput &)const;
    void _generateCumulativeOutput(ScoreboardCommand::SetScoreOutput const&, Objective const&, CommandOutput &)const;
    void _getSelectorResultsForObjective(std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, Scoreboard &, WildcardCommandSelector<Actor> const&, Objective &, CommandOrigin const&, CommandOutput &, bool)const;
    void _isOperation(CommandOperator)const;
};
