#pragma once



class PropertiesSettings {

public:

    PropertiesSettings(std::string const&);
    void getDefaultMaxPlayers(void);
    void parseBoolValue(std::string const&);
    void getServerPort(void)const;
    void getServerPortv6(void)const;
    void getMaxPlayers(void)const;
    void getMaxThreads(void)const;
    void getServerTickRange(void)const;
    void getOpPermissionLevel(void)const;
    void parseDifficulty(std::string const&);
    void getDifficulty(void)const;
    void parseGameMode(std::string const&);
    void getGameMode(void)const;
    void forceGamemode(void)const;
    void useWhitelist(void)const;
    void allowCheats(void)const;
    void texturePackRequired(void)const;
    void getMaxViewDistanceChunks(void)const;
    void useMsaGamertagsOnly(void)const;
    void getMaxPlayerIdleTime(void)const;
    void useOnlineAuthentication(void)const;
    void getCompressionThresholdBytesize(void)const;
    void websocketRetryTime(void)const;
    void useWebsocketEncryption(void)const;
    void getRemoteServerCommunicationEndpoint(void)const;
    void getDefaultPlayerPermissionLevel(void)const;
    void parseDefaultPlayerPermissionLevel(std::string const&)const;
    void getServerWakeupFrequency(void)const;
    void getCustomProperty(std::string const&)const;
    bool isContentLogFileEnabled(void)const;
    bool isServerAuthoritativeMovementEnabled(void)const;
    void getMovementScoreThreshold(void)const;
    void getMovementDistanceThreshold(void)const;
    void getMovementDurationThreshold(void)const;
    void shouldCorrectPlayerMovement(void)const;
    void getClacksEndpoint(void)const;
};
