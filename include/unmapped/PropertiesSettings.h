#pragma once

#include <string>


class PropertiesSettings {

public:

    ~PropertiesSettings();
    PropertiesSettings(std::string const&);
    void getDefaultMaxPlayers();
    void parseBoolValue(std::string const&);
    std::string getLevelSeed()const;
    std::string getLevelName()const;
    std::string getLevelType()const;
    std::string getMotd()const;
    std::string getServerType()const;
    std::string getServerId()const;
    std::string getExtraTrustedKeys()const;
    void getServerPort()const;
    void getServerPortv6()const;
    void getMaxPlayers()const;
    void getMaxThreads()const;
    void getServerTickRange()const;
    void getOpPermissionLevel()const;
    void parseDifficulty(std::string const&);
    void getDifficulty()const;
    void parseGameMode(std::string const&);
    void getGameMode()const;
    std::string getLanguage()const;
    void forceGamemode()const;
    void useWhitelist()const;
    void allowCheats()const;
    void texturePackRequired()const;
    void getMaxViewDistanceChunks()const;
    void useMsaGamertagsOnly()const;
    void getMaxPlayerIdleTime()const;
    void useOnlineAuthentication()const;
    void getCompressionThresholdBytesize()const;
    void websocketRetryTime()const;
    void useWebsocketEncryption()const;
    void getRemoteServerCommunicationEndpoint()const;
    void getDefaultPlayerPermissionLevel()const;
    void parseDefaultPlayerPermissionLevel(std::string const&)const;
    void getServerWakeupFrequency()const;
    void getCustomProperty(std::string const&)const;
    bool isContentLogFileEnabled()const;
    bool isServerAuthoritativeMovementEnabled()const;
    void getMovementScoreThreshold()const;
    void getMovementDistanceThreshold()const;
    void getMovementDurationThreshold()const;
    void shouldCorrectPlayerMovement()const;
    void getClacksEndpoint()const;
};
