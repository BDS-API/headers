#pragma once

class Objective {

public:

    void getPlayerScore(ScoreboardId const&)const;
    void Objective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ObjectiveCriteria const&);
    void setDisplayName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getRenderType(void)const;
    void getCriteria(void)const;
    void getPlayers(void)const;
    void getScores(void)const;
    void getPlayerScoreRef(ScoreboardId const&, ScoreInfoRef &);
    bool hasScores(void)const;
    void _modifyPlayerScore(int &, ScoreboardId const&, int, PlayerScoreSetFunction);
    void _loadPlayerScore(ScoreboardIdentityRef &, int);
    bool hasScore(ScoreboardId const&)const;
    void _resetPlayer(ScoreboardId const&);
    void deserialize(CompoundTag const&, Scoreboard &);
    void serialize(Objective const&);
};
