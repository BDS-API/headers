#pragma once

class Scoreboard {

public:
    static long Scoreboard::OBJECTIVES_ENUM;

    virtual ~Scoreboard();
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
    virtual bool isClientSide(void)const;

    void Scoreboard(CommandSoftEnumRegistry);
    void _init(void);
    void getObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void addObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ObjectiveCriteria const&);
    void removeObjective(Objective *);
    void createObjectiveCriteria(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, ObjectiveRenderType);
    void getCriteria(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getDisplayObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getObjectives(void)const;
    void resetPlayerScore(ScoreboardId const&, Objective &);
    void shouldUpdateUI(void)const;
    void onUpdateUI(void);
    void modifyPlayerScore(bool &, ScoreboardId const&, Objective &, int, PlayerScoreSetFunction);
    void getScoreboardIdentityRef(ScoreboardId const&);
    void getDisplayInfoSorted(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(ObjectiveSortOrder, std::vector<PlayerScore, std::allocator<PlayerScore>> &)>)const;
    void getDisplayInfoFiltered(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getTrackedIds(void)const;
    void resetPlayerScore(ScoreboardId const&);
    bool hasIdentityFor(ScoreboardId const&)const;
    void applyPlayerOperation(bool &, std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, ScoreboardId const&, Objective &, std::vector<ScoreboardId, std::allocator<ScoreboardId>> &, Objective &, CommandOperator);
    void _processOperation(bool &, CommandOperator, int, int);
    void getIdScores(ScoreboardId const&)const;
    void getScoreboardIdentityRefs(void)const;
    void registerScoreboardIdentity(ScoreboardId const&, PlayerScoreboardId const&);
    void registerScoreboardIdentity(ScoreboardId const&, ActorUniqueID const&);
    void registerScoreboardIdentity(ScoreboardId const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void registerScoreboardIdentity(CompoundTag const&);
    void clearScoreboardIdentity(ScoreboardId const&);
    void getScoreboardId(Player const&)const;
    void getScoreboardId(Actor const&)const;
    void getScoreboardId(ActorUniqueID const&)const;
    void getScoreboardId(PlayerScoreboardId const&)const;
    void getScoreboardId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void replaceFakePlayer(ScoreboardId const&, PlayerScoreboardId const&);
    void getNumTrackedIdentities(void)const;
    void getScoreboardIdentityRef(ScoreboardId const&)const;
    bool isObjectiveDisplayed(Objective const&)const;
    void getAssociatedDisplaySlots(Objective const&)const;
    void shouldClearScoresOnDeath(Actor const&);
    void _initCriterias(void);
    void _addLoadedObjective(std::unique_ptr<Objective, std::default_delete<Objective>>);
    void _addLoadedCriteria(std::unique_ptr<ObjectiveCriteria, std::default_delete<ObjectiveCriteria>>);
};
