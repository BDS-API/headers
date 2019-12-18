#pragma once

class ActorDefinitionIdentifier {

public:
    static long ActorDefinitionIdentifier::NAMESPACE_SEPARATOR[abi:cxx11];
    static long ActorDefinitionIdentifier::EVENT_BEGIN[abi:cxx11];
    static long ActorDefinitionIdentifier::EVENT_END[abi:cxx11];


    void ActorDefinitionIdentifier(void);
    void ActorDefinitionIdentifier(std::string, std::string, std::string);
    void _initialize(void);
    void ActorDefinitionIdentifier(ActorDefinitionIdentifier const&);
    void ActorDefinitionIdentifier(ActorDefinitionIdentifier&&);
    void _extractIdentifier(std::string const&, ActorDefinitionIdentifier&);
    void ActorDefinitionIdentifier(char const*);
    void ActorDefinitionIdentifier(std::string const&);
    void ActorDefinitionIdentifier(ActorType);
    bool isEmpty(void)const;
    void clear(void);
    void initialize(std::string const&);
    void initialize(std::string const&, std::string const&, std::string const&);
    void setIdentifier(std::string const&);
    void setInitEvent(std::string const&);
    void getCanonicalHash(void)const;
    bool isVanilla(void)const;
    void _getLegacyActorType(void)const;
};
