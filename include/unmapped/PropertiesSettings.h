#pragma once

#include <string>


class PropertiesSettings {

public:
    void getRemoteServerCommunicationEndpoint()const;
    void getMovementScoreThreshold()const;
    void forceGamemode()const;
    void getMovementDistanceThreshold()const;
    std::string getLevelType()const;
    PropertiesSettings(std::string const&);
    void getOpPermissionLevel()const;
    std::string getServerType()const;
    void getMaxPlayers()const;
    std::string getServerId()const;
    ~PropertiesSettings();
    void getServerPort()const;
    void getDefaultPlayerPermissionLevel()const;
    void texturePackRequired()const;
    void useMsaGamertagsOnly()const;
    void getDifficulty()const;
    void getGameMode()const;
    void parseGameMode(std::string const&);
    std::string getExtraTrustedKeys()const;
    void parseDifficulty(std::string const&);
    void useOnlineAuthentication()const;
    void getMovementDurationThreshold()const;
    void parseBoolValue(std::string const&);
    void shouldCorrectPlayerMovement()const;
    void useWhitelist()const;
    std::string getMotd()const;
    void allowCheats()const;
    void parseDefaultPlayerPermissionLevel(std::string const&)const;
    void getClacksEndpoint()const;
    void getServerTickRange()const;
    void getServerWakeupFrequency()const;
    void getMaxPlayerIdleTime()const;
    std::string getLevelName()const;
    void getServerPortv6()const;
    void useWebsocketEncryption()const;
    std::string getLevelSeed()const;
    void getCustomProperty(std::string const&)const;
    void websocketRetryTime()const;
    void getDefaultMaxPlayers();
    bool isContentLogFileEnabled()const;
    void getMaxThreads()const;
    bool isServerAuthoritativeMovementEnabled()const;
    void getCompressionThresholdBytesize()const;
    void getMaxViewDistanceChunks()const;
    std::string getLanguage()const;
};
