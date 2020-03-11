#pragma once

#include "./NpcComponent.h"
#include <string>
#include "./DataLoadHelper.h"
#include <memory>
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/command/orgin/CommandOrigin.h"
#include "../bedrock/actor/Player.h"
#include <vector>
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include <functional>
#include "../bedrock/network/packet/NpcRequestPacket.h"
#include "./NpcAction.h"


class NpcComponent {

public:
    static long MAX_NPC_NAME_LENGTH;
    static std::string NAME_RAW_TEXT_TAG;
    static std::string INTERACTIVE_TAG;
    static std::string ACTIONS_TAG;
    static std::string URL_TAG;


    NpcComponent();
    void initFromDefinition(Actor &);
//  void _defineEntityDataString(Actor &, ActorDataIDs); //TODO: incomplete function definition
    void _deserializeData();
    void addAdditionalSaveData(Actor &, CompoundTag &)const;
    std::string getNameRawText(Actor const&)const;
    std::string getInteractiveRawText(Actor const&)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void loadActions(Actor &);
    std::string _serializeActions()const;
    void getInteraction(Actor &, Player &, ActorInteraction &);
    bool hasEditPermission(Player &)const;
    void getCommandPermissionLevel()const;
    void getButtonCounts()const;
    void getActionCount()const;
    void getUrlCount()const;
    std::string getName(Actor const&)const;
    std::string getInteractiveText(Actor &)const;
    void _isClientSide(Actor &)const;
    void getPortraitOffset()const;
    void getPickerOffset()const;
    void setInteractiveTextFilter(std::function<std::string (std::string const&)>, bool);
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
//  void _defineEntityDataInt(Actor &, ActorDataIDs); //TODO: incomplete function definition
    void loadNameRawText(Actor &);
    void loadInteractiveRawText(Actor &);
    ~NpcComponent();
    NpcComponent(NpcComponent &&);
};
