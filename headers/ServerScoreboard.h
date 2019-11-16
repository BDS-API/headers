#pragma once

class ServerScoreboard : Scoreboard {

    virtual void Server~ServerScoreboard();
    virtual void Server~ServerScoreboard();
    virtual void ServersetDisplayObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Objective const&, ObjectiveSortOrder);
    virtual void ServerclearDisplayObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ServercreateScoreboardId(Player const&);
    virtual void ServercreateScoreboardId(Actor const&);
    virtual void ServercreateScoreboardId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ServeronObjectiveAdded(Objective const&);
    virtual void ServeronObjectiveRemoved(Objective &);
    virtual void ServeronScoreChanged(ScoreboardId const&, Objective const&);
    virtual void ServeronPlayerScoreRemoved(ScoreboardId const&, Objective const&);
    virtual void ServeronPlayerJoined(Player const&);
    virtual void ServeronPlayerIdentityUpdated(PlayerScoreboardId const&);
    virtual void Servertick(void);
    virtual void ServersetPacketSender(PacketSender *);
    virtual void ServerwriteToLevelStorage(void);
    virtual void ServerisClientSide(void)const;
}
