#pragma once

#include <string>


class IdentityDictionary {

public:
    IdentityDictionary(); // _ZN18IdentityDictionaryC2Ev
    ~IdentityDictionary(); // _ZN18IdentityDictionaryD2Ev
    bool isTracked(PlayerScoreboardId const&)const; // _ZNK18IdentityDictionary9isTrackedERK18PlayerScoreboardId
    bool isTracked(ActorUniqueID const&)const; // _ZNK18IdentityDictionary9isTrackedERK13ActorUniqueID
    bool isTracked(std::string const&)const; // _ZNK18IdentityDictionary9isTrackedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isTracked(ScoreboardId const&)const; // _ZNK18IdentityDictionary9isTrackedERK12ScoreboardId
    void getScoreboardId(PlayerScoreboardId const&)const; // _ZNK18IdentityDictionary15getScoreboardIdERK18PlayerScoreboardId
    void getScoreboardId(ActorUniqueID const&)const; // _ZNK18IdentityDictionary15getScoreboardIdERK13ActorUniqueID
    void getScoreboardId(std::string const&)const; // _ZNK18IdentityDictionary15getScoreboardIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void registerIdentity(ScoreboardId const&, PlayerScoreboardId const&); // _ZN18IdentityDictionary16registerIdentityERK12ScoreboardIdRK18PlayerScoreboardId
    void registerIdentity(ScoreboardId const&, ActorUniqueID const&); // _ZN18IdentityDictionary16registerIdentityERK12ScoreboardIdRK13ActorUniqueID
    void registerIdentity(ScoreboardId const&, std::string const&); // _ZN18IdentityDictionary16registerIdentityERK12ScoreboardIdRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clearIdentity(ScoreboardId const&); // _ZN18IdentityDictionary13clearIdentityERK12ScoreboardId
//  void getScoreboardIds(IdentityDefinition::Type)const; //TODO: incomplete function definition // _ZNK18IdentityDictionary16getScoreboardIdsEN18IdentityDefinition4TypeE
    void getAllScoreboardIds()const; // _ZNK18IdentityDictionary19getAllScoreboardIdsEv
    void getNumTrackedIdentities()const; // _ZNK18IdentityDictionary23getNumTrackedIdentitiesEv
    void shouldConvertFakePlayer(PlayerScoreboardId const&, std::string const&); // _ZN18IdentityDictionary23shouldConvertFakePlayerERK18PlayerScoreboardIdRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void convertFakeToReal(ScoreboardId const&, PlayerScoreboardId const&); // _ZN18IdentityDictionary17convertFakeToRealERK12ScoreboardIdRK18PlayerScoreboardId
    void _trackIdInTargetDict(ScoreboardId const&, PlayerScoreboardId const&); // _ZN18IdentityDictionary20_trackIdInTargetDictERK12ScoreboardIdRK18PlayerScoreboardId
    void _trackIdInTargetDict(ScoreboardId const&, ActorUniqueID const&); // _ZN18IdentityDictionary20_trackIdInTargetDictERK12ScoreboardIdRK13ActorUniqueID
    void _trackIdInTargetDict(ScoreboardId const&, std::string const&); // _ZN18IdentityDictionary20_trackIdInTargetDictERK12ScoreboardIdRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
