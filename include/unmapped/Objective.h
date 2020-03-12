#pragma once

#include <string>


class Objective {

public:
    bool hasScores()const;
    void getCriteria()const;
    void setDisplayName(std::string const&);
    void getPlayerScore(ScoreboardId const&)const;
    void serialize(Objective const&);
    void deserialize(CompoundTag const&, Scoreboard &);
//  void getPlayerScoreRef(ScoreboardId const&, ScoreInfoRef &); //TODO: incomplete function definition
    Objective(std::string const&, ObjectiveCriteria const&);
    void getRenderType()const;
    void getPlayers()const;
//  void _modifyPlayerScore(int &, ScoreboardId const&, int, PlayerScoreSetFunction); //TODO: incomplete function definition
    void getScores()const;
    ~Objective();
    std::string getName()const;
    bool hasScore(ScoreboardId const&)const;
    std::string getDisplayName()const;
    void _loadPlayerScore(ScoreboardIdentityRef &, int);
    void _resetPlayer(ScoreboardId const&);
};
