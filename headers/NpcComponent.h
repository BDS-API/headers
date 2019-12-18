#pragma once

class NpcComponent {

public:
    static long NpcComponent::MAX_NPC_NAME_LENGTH;
    static long NpcComponent::NAME_RAW_TEXT_TAG[abi:cxx11];
    static long NpcComponent::INTERACTIVE_TAG[abi:cxx11];
    static long NpcComponent::ACTIONS_TAG[abi:cxx11];
    static long NpcComponent::URL_TAG[abi:cxx11];


    void NpcComponent(void);
    void initFromDefinition(Actor &);
    void _defineEntityDataString(Actor &, ActorDataIDs);
    void _deserializeData(void);
    void addAdditionalSaveData(Actor &, CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void loadActions(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    bool hasEditPermission(Player &)const;
    void getCommandPermissionLevel(void)const;
    void getButtonCounts(void)const;
    void getActionCount(void)const;
    void getUrlCount(void)const;
    void _isClientSide(Actor &)const;
    void getPortraitOffset(void)const;
    void getPickerOffset(void)const;
    void setInteractiveTextFilter(std::function<std::string ()(std::string const&)>, bool);
    void removeInteractiveTextFilter(void);
    void getSelectedSkinData(void)const;
    void getSkinData(int)const;
    void getSkinIndex(void)const;
    void getSkinCount(void)const;
    void setName(Actor &, std::string const&, bool);
    void _sendNpcRequest(Actor &, NpcRequestPacket)const;
    void setInteractiveText(Actor &, std::string const&, bool);
    void setSkinIndex(Actor &, int, bool);
    void _isServerSide(Actor &)const;
    void setSkin(Actor &);
    void _loadActions(std::vector<std::unique_ptr<NpcAction, std::default_delete<NpcAction>>, std::allocator<std::unique_ptr<NpcAction, std::default_delete<NpcAction>>>> &, std::string const&)const;
    void loadNPCData(Actor &);
    void _loadData(Actor &);
    void setActions(Actor &, std::vector<std::unique_ptr<NpcAction, std::default_delete<NpcAction>>, std::allocator<std::unique_ptr<NpcAction, std::default_delete<NpcAction>>>> &&);
    void syncActionsWithClient(Actor &);
    void executeCommandAction(Actor &, int);
    void getActionAt(unsigned long);
    void compileCommand(Actor &, CommandOrigin const&, std::string const&, int);
    void executeClosingCommands(Actor &);
    void handleNpcRequest(Actor &, Player const&, NpcRequestPacket const&);
    void _setActions(Actor &, Player const&, NpcRequestPacket const&);
    void requestClosingCommandActions(Actor &)const;
    void requestCommandAction(Actor &, int)const;
    void syncActionsWithServer(Actor &)const;
    void addAction(std::unique_ptr<NpcAction, std::default_delete<NpcAction>>);
    void removeActionAt(unsigned long);
    void getActionAt(unsigned long)const;
    void getUpdatedActions(std::string const&, std::vector<std::unique_ptr<NpcAction, std::default_delete<NpcAction>>, std::allocator<std::unique_ptr<NpcAction, std::default_delete<NpcAction>>>> &, bool &, bool &);
    void _getCommands(Actor &);
    void _defineEntityDataInt(Actor &, ActorDataIDs);
    void loadNameRawText(Actor &);
    void loadInteractiveRawText(Actor &);
    void NpcComponent(NpcComponent&&);
};
