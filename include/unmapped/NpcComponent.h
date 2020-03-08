#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"
#include "../bedrock/command/orgin/CommandOrigin"
#include "../bedrock/network/packet/NpcRequestPacket"


class NpcComponent {

public:
    static long MAX_NPC_NAME_LENGTH;
    static long NAME_RAW_TEXT_TAG[abi:cxx11];
    static long INTERACTIVE_TAG[abi:cxx11];
    static long ACTIONS_TAG[abi:cxx11];
    static long URL_TAG[abi:cxx11];


    NpcComponent(void);
    void initFromDefinition(Actor &);
    void _defineEntityDataString(Actor &, ActorDataIDs);
    void _deserializeData();
    void addAdditionalSaveData(Actor &, CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void loadActions(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    bool hasEditPermission(Player &)const;
    void getCommandPermissionLevel()const;
    void getButtonCounts()const;
    void getActionCount()const;
    void getUrlCount()const;
    void _isClientSide(Actor &)const;
    void getPortraitOffset()const;
    void getPickerOffset()const;
    void setInteractiveTextFilter(std::function<std::string ()(std::string const&)>, bool);
    void removeInteractiveTextFilter();
    void getSelectedSkinData()const;
    void getSkinData(int)const;
    void getSkinIndex()const;
    void getSkinCount()const;
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
    NpcComponent(NpcComponent&&);
};
