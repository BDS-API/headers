#pragma once

#include <string>


class PropertiesSettings {

public:
    bool isContentLogFileEnabled()const;
    std::string getLevelType()const;
    PropertiesSettings(std::string const&);
    void getMaxPlayerIdleTime()const;
    void getMaxViewDistanceChunks()const;
    std::string getServerType()const;
    void getDifficulty()const;
    void getServerPortv6()const;
    void getCompressionThresholdBytesize()const;
    void shouldCorrectPlayerMovement()const;
    void useOnlineAuthentication()const;
    void getServerPort()const;
    void getRemoteServerCommunicationEndpoint()const;
    void getGameMode()const;
    void allowCheats()const;
    void getMovementDistanceThreshold()const;
    void getMovementDurationThreshold()const;
    void getMaxPlayers()const;
    void parseBoolValue(std::string const&);
    void useWebsocketEncryption()const;
    void getMaxThreads()const;
    ~PropertiesSettings();
    std::string getLevelSeed()const;
    void getMovementScoreThreshold()const;
    void getDefaultPlayerPermissionLevel()const;
    void texturePackRequired()const;
    std::string getLanguage()const;
    void parseDefaultPlayerPermissionLevel(std::string const&)const;
    void parseGameMode(std::string const&);
    std::string getLevelName()const;
    std::string getMotd()const;
    void websocketRetryTime()const;
    std::string getExtraTrustedKeys()const;
    void getServerWakeupFrequency()const;
    void getClacksEndpoint()const;
    void getCustomProperty(std::string const&)const;
    void parseDifficulty(std::string const&);
    void forceGamemode()const;
    void getOpPermissionLevel()const;
    std::string getServerId()const;
    void useMsaGamertagsOnly()const;
    bool isServerAuthoritativeMovementEnabled()const;
    void getServerTickRange()const;
    void useWhitelist()const;
    void getDefaultMaxPlayers();
};
