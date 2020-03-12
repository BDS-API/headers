#pragma once



class ScorePacketInfo {

public:
    ~ScorePacketInfo();
    ScorePacketInfo(ScorePacketInfo &&);
    ScorePacketInfo(ScorePacketInfo const&);
};
