#pragma once

#include <string>


class PropertiesSettings {

public:
    ~PropertiesSettings(); // _ZN18PropertiesSettingsD2Ev
    PropertiesSettings(std::string const&); // _ZN18PropertiesSettingsC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getDefaultMaxPlayers(); // _ZN18PropertiesSettings20getDefaultMaxPlayersEv
    void parseBoolValue(std::string const&); // _ZN18PropertiesSettings14parseBoolValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getLevelSeed()const; // _ZNK18PropertiesSettings12getLevelSeedB5cxx11Ev
    std::string getLevelName()const; // _ZNK18PropertiesSettings12getLevelNameB5cxx11Ev
    std::string getLevelType()const; // _ZNK18PropertiesSettings12getLevelTypeB5cxx11Ev
    std::string getMotd()const; // _ZNK18PropertiesSettings7getMotdB5cxx11Ev
    std::string getServerType()const; // _ZNK18PropertiesSettings13getServerTypeB5cxx11Ev
    std::string getServerId()const; // _ZNK18PropertiesSettings11getServerIdB5cxx11Ev
    std::string getExtraTrustedKeys()const; // _ZNK18PropertiesSettings19getExtraTrustedKeysB5cxx11Ev
    void getServerPort()const; // _ZNK18PropertiesSettings13getServerPortEv
    void getServerPortv6()const; // _ZNK18PropertiesSettings15getServerPortv6Ev
    void getMaxPlayers()const; // _ZNK18PropertiesSettings13getMaxPlayersEv
    void getMaxThreads()const; // _ZNK18PropertiesSettings13getMaxThreadsEv
    void getServerTickRange()const; // _ZNK18PropertiesSettings18getServerTickRangeEv
    void getOpPermissionLevel()const; // _ZNK18PropertiesSettings20getOpPermissionLevelEv
    void parseDifficulty(std::string const&); // _ZN18PropertiesSettings15parseDifficultyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getDifficulty()const; // _ZNK18PropertiesSettings13getDifficultyEv
    void parseGameMode(std::string const&); // _ZN18PropertiesSettings13parseGameModeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getGameMode()const; // _ZNK18PropertiesSettings11getGameModeEv
    std::string getLanguage()const; // _ZNK18PropertiesSettings11getLanguageB5cxx11Ev
    void forceGamemode()const; // _ZNK18PropertiesSettings13forceGamemodeEv
    void useWhitelist()const; // _ZNK18PropertiesSettings12useWhitelistEv
    void allowCheats()const; // _ZNK18PropertiesSettings11allowCheatsEv
    void texturePackRequired()const; // _ZNK18PropertiesSettings19texturePackRequiredEv
    void getMaxViewDistanceChunks()const; // _ZNK18PropertiesSettings24getMaxViewDistanceChunksEv
    void useMsaGamertagsOnly()const; // _ZNK18PropertiesSettings19useMsaGamertagsOnlyEv
    void getMaxPlayerIdleTime()const; // _ZNK18PropertiesSettings20getMaxPlayerIdleTimeEv
    void useOnlineAuthentication()const; // _ZNK18PropertiesSettings23useOnlineAuthenticationEv
    void getCompressionThresholdBytesize()const; // _ZNK18PropertiesSettings31getCompressionThresholdBytesizeEv
    void websocketRetryTime()const; // _ZNK18PropertiesSettings18websocketRetryTimeEv
    void useWebsocketEncryption()const; // _ZNK18PropertiesSettings22useWebsocketEncryptionEv
    void getRemoteServerCommunicationEndpoint()const; // _ZNK18PropertiesSettings36getRemoteServerCommunicationEndpointEv
    void getDefaultPlayerPermissionLevel()const; // _ZNK18PropertiesSettings31getDefaultPlayerPermissionLevelEv
    void parseDefaultPlayerPermissionLevel(std::string const&)const; // _ZNK18PropertiesSettings33parseDefaultPlayerPermissionLevelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getServerWakeupFrequency()const; // _ZNK18PropertiesSettings24getServerWakeupFrequencyEv
    void getCustomProperty(std::string const&)const; // _ZNK18PropertiesSettings17getCustomPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isContentLogFileEnabled()const; // _ZNK18PropertiesSettings23isContentLogFileEnabledEv
    bool isServerAuthoritativeMovementEnabled()const; // _ZNK18PropertiesSettings36isServerAuthoritativeMovementEnabledEv
    void getMovementScoreThreshold()const; // _ZNK18PropertiesSettings25getMovementScoreThresholdEv
    void getMovementDistanceThreshold()const; // _ZNK18PropertiesSettings28getMovementDistanceThresholdEv
    void getMovementDurationThreshold()const; // _ZNK18PropertiesSettings28getMovementDurationThresholdEv
    void shouldCorrectPlayerMovement()const; // _ZNK18PropertiesSettings27shouldCorrectPlayerMovementEv
    void getClacksEndpoint()const; // _ZNK18PropertiesSettings17getClacksEndpointEv
};
