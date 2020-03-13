#pragma once

#include "../bedrock/network/packet/NpcRequestPacket.h"
#include <vector>
#include <memory>
#include <string>
#include <functional>


class NpcComponent {

public:
    static long MAX_NPC_NAME_LENGTH;
    static std::string NAME_RAW_TEXT_TAG;
    static std::string INTERACTIVE_TAG;
    static std::string ACTIONS_TAG;
    static std::string URL_TAG;

    NpcComponent(); // _ZN12NpcComponentC2Ev
    void initFromDefinition(Actor &); // _ZN12NpcComponent18initFromDefinitionER5Actor
//  void _defineEntityDataString(Actor &, ActorDataIDs); //TODO: incomplete function definition // _ZN12NpcComponent23_defineEntityDataStringER5Actor12ActorDataIDs
    void _deserializeData(); // _ZN12NpcComponent16_deserializeDataEv
    void addAdditionalSaveData(Actor &, CompoundTag &)const; // _ZNK12NpcComponent21addAdditionalSaveDataER5ActorR11CompoundTag
    std::string getNameRawText(Actor const&)const; // _ZNK12NpcComponent14getNameRawTextB5cxx11ERK5Actor
    std::string getInteractiveRawText(Actor const&)const; // _ZNK12NpcComponent21getInteractiveRawTextB5cxx11ERK5Actor
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN12NpcComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void loadActions(Actor &); // _ZN12NpcComponent11loadActionsER5Actor
    std::string _serializeActions()const; // _ZNK12NpcComponent17_serializeActionsB5cxx11Ev
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN12NpcComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    bool hasEditPermission(Player &)const; // _ZNK12NpcComponent17hasEditPermissionER6Player
    void getCommandPermissionLevel()const; // _ZNK12NpcComponent25getCommandPermissionLevelEv
    void getButtonCounts()const; // _ZNK12NpcComponent15getButtonCountsEv
    void getActionCount()const; // _ZNK12NpcComponent14getActionCountEv
    void getUrlCount()const; // _ZNK12NpcComponent11getUrlCountEv
    std::string getName(Actor const&)const; // _ZNK12NpcComponent7getNameB5cxx11ERK5Actor
    std::string getInteractiveText(Actor &)const; // _ZNK12NpcComponent18getInteractiveTextB5cxx11ER5Actor
    void _isClientSide(Actor &)const; // _ZNK12NpcComponent13_isClientSideER5Actor
    void getPortraitOffset()const; // _ZNK12NpcComponent17getPortraitOffsetEv
    void getPickerOffset()const; // _ZNK12NpcComponent15getPickerOffsetEv
    void setInteractiveTextFilter(std::function<std::string (std::string const&)>, bool); // _ZN12NpcComponent24setInteractiveTextFilterESt8functionIFNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS6_EEb
    void removeInteractiveTextFilter(); // _ZN12NpcComponent27removeInteractiveTextFilterEv
    void getSelectedSkinData()const; // _ZNK12NpcComponent19getSelectedSkinDataEv
    void getSkinData(int)const; // _ZNK12NpcComponent11getSkinDataEi
    void getSkinIndex()const; // _ZNK12NpcComponent12getSkinIndexEv
    void getSkinCount()const; // _ZNK12NpcComponent12getSkinCountEv
    void setName(Actor &, std::string const&, bool); // _ZN12NpcComponent7setNameER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void _sendNpcRequest(Actor &, NpcRequestPacket)const; // _ZNK12NpcComponent15_sendNpcRequestER5Actor16NpcRequestPacket
    void setInteractiveText(Actor &, std::string const&, bool); // _ZN12NpcComponent18setInteractiveTextER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void setSkinIndex(Actor &, int, bool); // _ZN12NpcComponent12setSkinIndexER5Actorib
    void _isServerSide(Actor &)const; // _ZNK12NpcComponent13_isServerSideER5Actor
    void setSkin(Actor &); // _ZN12NpcComponent7setSkinER5Actor
    void _loadActions(std::vector<std::unique_ptr<NpcAction>> &, std::string const&)const; // _ZNK12NpcComponent12_loadActionsERSt6vectorISt10unique_ptrI9NpcActionSt14default_deleteIS2_EESaIS5_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadNPCData(Actor &); // _ZN12NpcComponent11loadNPCDataER5Actor
    void _loadData(Actor &); // _ZN12NpcComponent9_loadDataER5Actor
    void setActions(Actor &, std::vector<std::unique_ptr<NpcAction>> &&); // _ZN12NpcComponent10setActionsER5ActorOSt6vectorISt10unique_ptrI9NpcActionSt14default_deleteIS4_EESaIS7_EE
    void syncActionsWithClient(Actor &); // _ZN12NpcComponent21syncActionsWithClientER5Actor
    void executeCommandAction(Actor &, int); // _ZN12NpcComponent20executeCommandActionER5Actori
    void getActionAt(unsigned long); // _ZN12NpcComponent11getActionAtEm
    void compileCommand(Actor &, CommandOrigin const&, std::string const&, int); // _ZN12NpcComponent14compileCommandER5ActorRK13CommandOriginRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void executeClosingCommands(Actor &); // _ZN12NpcComponent22executeClosingCommandsER5Actor
    void handleNpcRequest(Actor &, Player const&, NpcRequestPacket const&); // _ZN12NpcComponent16handleNpcRequestER5ActorRK6PlayerRK16NpcRequestPacket
    void _setActions(Actor &, Player const&, NpcRequestPacket const&); // _ZN12NpcComponent11_setActionsER5ActorRK6PlayerRK16NpcRequestPacket
    void requestClosingCommandActions(Actor &)const; // _ZNK12NpcComponent28requestClosingCommandActionsER5Actor
    void requestCommandAction(Actor &, int)const; // _ZNK12NpcComponent20requestCommandActionER5Actori
    void syncActionsWithServer(Actor &)const; // _ZNK12NpcComponent21syncActionsWithServerER5Actor
    void addAction(std::unique_ptr<NpcAction>); // _ZN12NpcComponent9addActionESt10unique_ptrI9NpcActionSt14default_deleteIS1_EE
    void removeActionAt(unsigned long); // _ZN12NpcComponent14removeActionAtEm
    void getActionAt(unsigned long)const; // _ZNK12NpcComponent11getActionAtEm
    void getUpdatedActions(std::string const&, std::vector<std::unique_ptr<NpcAction>> &, bool &, bool &); // _ZN12NpcComponent17getUpdatedActionsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISt10unique_ptrI9NpcActionSt14default_deleteISA_EESaISD_EERbSH_
    void _getCommands(Actor &); // _ZN12NpcComponent12_getCommandsER5Actor
//  void _defineEntityDataInt(Actor &, ActorDataIDs); //TODO: incomplete function definition // _ZN12NpcComponent20_defineEntityDataIntER5Actor12ActorDataIDs
    void loadNameRawText(Actor &); // _ZN12NpcComponent15loadNameRawTextER5Actor
    void loadInteractiveRawText(Actor &); // _ZN12NpcComponent22loadInteractiveRawTextER5Actor
    ~NpcComponent(); // _ZN12NpcComponentD2Ev
    NpcComponent(NpcComponent &&); // _ZN12NpcComponentC2EOS_
};
