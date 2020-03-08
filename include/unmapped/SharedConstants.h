#pragma once



class SharedConstants {

public:
    static long MajorVersion;
    static long MinorVersion;
    static long PatchVersion;
    static long RevisionVersion;
    static long IsBeta;
    static long NetworkProtocolVersion;
    static long StoreVersion;
    static long AutomationProtocolVersion;
    static long CompanionAppProtocolVersion;
    static long MaxChatLength;
    static long LevelDBCompressorID;
    static long CurrentStorageVersion;
    static long CurrentLevelChunkFormat;
    static long CurrentSubChunkFormat;
    static long NetworkDefaultGamePort;
    static long NetworkDefaultGamePortv6;
    static long NetworkEphemeralPort;
    static long NetworkDefaultMaxConnections;
    static long MinimumCompatibleGameVersionForLevelData;


    bool isVersion(int, int, int, int);
    void getVersionCode();
    void getVersionCode(int, int, int, int);
};
