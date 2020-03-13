#pragma once

#include <string>


class ActorDefinitionIdentifier {

public:
    static std::string NAMESPACE_SEPARATOR;
    static std::string EVENT_BEGIN;
    static std::string EVENT_END;

    ~ActorDefinitionIdentifier(); // _ZN25ActorDefinitionIdentifierD2Ev
    ActorDefinitionIdentifier(); // _ZN25ActorDefinitionIdentifierC2Ev
    ActorDefinitionIdentifier(std::string, std::string, std::string); // _ZN25ActorDefinitionIdentifierC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_S5_
    void _initialize(); // _ZN25ActorDefinitionIdentifier11_initializeEv
    ActorDefinitionIdentifier(ActorDefinitionIdentifier const&); // _ZN25ActorDefinitionIdentifierC2ERKS_
    ActorDefinitionIdentifier(ActorDefinitionIdentifier &&); // _ZN25ActorDefinitionIdentifierC2EOS_
    void _extractIdentifier(std::string const&, ActorDefinitionIdentifier &); // _ZN25ActorDefinitionIdentifier18_extractIdentifierERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS_
    ActorDefinitionIdentifier(char const*); // _ZN25ActorDefinitionIdentifierC2EPKc
    ActorDefinitionIdentifier(std::string const&); // _ZN25ActorDefinitionIdentifierC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  ActorDefinitionIdentifier(ActorType); //TODO: incomplete function definition // _ZN25ActorDefinitionIdentifierC2E9ActorType
    bool isEmpty()const; // _ZNK25ActorDefinitionIdentifier7isEmptyEv
    void clear(); // _ZN25ActorDefinitionIdentifier5clearEv
    void initialize(std::string const&); // _ZN25ActorDefinitionIdentifier10initializeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initialize(std::string const&, std::string const&, std::string const&); // _ZN25ActorDefinitionIdentifier10initializeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    void setIdentifier(std::string const&); // _ZN25ActorDefinitionIdentifier13setIdentifierERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setInitEvent(std::string const&); // _ZN25ActorDefinitionIdentifier12setInitEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getNamespace()const; // _ZNK25ActorDefinitionIdentifier12getNamespaceB5cxx11Ev
    std::string getIdentifier()const; // _ZNK25ActorDefinitionIdentifier13getIdentifierB5cxx11Ev
    std::string getInitEvent()const; // _ZNK25ActorDefinitionIdentifier12getInitEventB5cxx11Ev
    std::string getCanonicalName()const; // _ZNK25ActorDefinitionIdentifier16getCanonicalNameB5cxx11Ev
    void getCanonicalHash()const; // _ZNK25ActorDefinitionIdentifier16getCanonicalHashEv
    std::string getFullName()const; // _ZNK25ActorDefinitionIdentifier11getFullNameB5cxx11Ev
    bool isVanilla()const; // _ZNK25ActorDefinitionIdentifier9isVanillaEv
    void operator==(ActorDefinitionIdentifier const&)const; // _ZNK25ActorDefinitionIdentifiereqERKS_
    void _getLegacyActorType()const; // _ZNK25ActorDefinitionIdentifier19_getLegacyActorTypeEv
};
