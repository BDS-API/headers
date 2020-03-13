#pragma once

#include <string>


class Objective {

public:
    void getPlayerScore(ScoreboardId const&)const; // _ZNK9Objective14getPlayerScoreERK12ScoreboardId
    std::string getDisplayName()const; // _ZNK9Objective14getDisplayNameB5cxx11Ev
    std::string getName()const; // _ZNK9Objective7getNameB5cxx11Ev
    Objective(std::string const&, ObjectiveCriteria const&); // _ZN9ObjectiveC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK17ObjectiveCriteria
    void setDisplayName(std::string const&); // _ZN9Objective14setDisplayNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getRenderType()const; // _ZNK9Objective13getRenderTypeEv
    void getCriteria()const; // _ZNK9Objective11getCriteriaEv
    void getPlayers()const; // _ZNK9Objective10getPlayersEv
    void getScores()const; // _ZNK9Objective9getScoresEv
//  void getPlayerScoreRef(ScoreboardId const&, ScoreInfoRef &); //TODO: incomplete function definition // _ZN9Objective17getPlayerScoreRefERK12ScoreboardIdR12ScoreInfoRef
    bool hasScores()const; // _ZNK9Objective9hasScoresEv
//  void _modifyPlayerScore(int &, ScoreboardId const&, int, PlayerScoreSetFunction); //TODO: incomplete function definition // _ZN9Objective18_modifyPlayerScoreERiRK12ScoreboardIdi22PlayerScoreSetFunction
    void _loadPlayerScore(ScoreboardIdentityRef &, int); // _ZN9Objective16_loadPlayerScoreER21ScoreboardIdentityRefi
    bool hasScore(ScoreboardId const&)const; // _ZNK9Objective8hasScoreERK12ScoreboardId
    void _resetPlayer(ScoreboardId const&); // _ZN9Objective12_resetPlayerERK12ScoreboardId
    void deserialize(CompoundTag const&, Scoreboard &); // _ZN9Objective11deserializeERK11CompoundTagR10Scoreboard
    void serialize(Objective const&); // _ZN9Objective9serializeERKS_
    ~Objective(); // _ZN9ObjectiveD2Ev
};
