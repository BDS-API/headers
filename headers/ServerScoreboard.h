#pragma once

class ServerScoreboard : Scoreboard {

    virtual ~ServerScoreboard();
    virtual ~ServerScoreboard();
    virtual void setDisplayObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Objective const&, ObjectiveSortOrder);
    virtual void clearDisplayObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void createScoreboardId(Player const&);
    virtual void createScoreboardId(Actor const&);
    virtual void createScoreboardId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onObjectiveAdded(Objective const&);
    virtual void onObjectiveRemoved(Objective &);
    virtual void onScoreChanged(ScoreboardId const&, Objective const&);
    virtual void onPlayerScoreRemoved(ScoreboardId const&, Objective const&);
    virtual void onPlayerJoined(Player const&);
    virtual void onPlayerIdentityUpdated(PlayerScoreboardId const&);
    virtual void tick(void);
    virtual void setPacketSender(PacketSender *);
    virtual void writeToLevelStorage(void);
    virtual void isClientSide(void)const;
}
