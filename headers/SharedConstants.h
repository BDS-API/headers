#pragma once

class SharedConstants {

public:
    static long SharedConstants::MajorVersion;
    static long SharedConstants::MinorVersion;
    static long SharedConstants::PatchVersion;
    static long SharedConstants::RevisionVersion;
    static long SharedConstants::IsBeta;
    static long SharedConstants::NetworkProtocolVersion;
    static long SharedConstants::StoreVersion;
    static long SharedConstants::AutomationProtocolVersion;
    static long SharedConstants::CompanionAppProtocolVersion;
    static long SharedConstants::MaxChatLength;
    static long SharedConstants::LevelDBCompressorID;
    static long SharedConstants::CurrentStorageVersion;
    static long SharedConstants::CurrentLevelChunkFormat;
    static long SharedConstants::CurrentSubChunkFormat;
    static long SharedConstants::NetworkDefaultGamePort;
    static long SharedConstants::NetworkDefaultGamePortv6;
    static long SharedConstants::NetworkEphemeralPort;
    static long SharedConstants::NetworkDefaultMaxConnections;
    static long SharedConstants::MinimumCompatibleGameVersionForLevelData;


    bool isVersion(int, int, int, int);
    void getVersionCode(void);
    void getVersionCode(int, int, int, int);
};
