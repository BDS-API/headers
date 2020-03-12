#pragma once

#include <string>


class ActorDefinitionIdentifier {

public:
    static std::string NAMESPACE_SEPARATOR;
    static std::string EVENT_BEGIN;
    static std::string EVENT_END;

    bool isVanilla()const;
    void _extractIdentifier(std::string const&, ActorDefinitionIdentifier &);
    void initialize(std::string const&, std::string const&, std::string const&);
    void operator==(ActorDefinitionIdentifier const&)const;
    void clear();
    std::string getFullName()const;
    std::string getInitEvent()const;
    bool isEmpty()const;
    ActorDefinitionIdentifier(std::string, std::string, std::string);
    ActorDefinitionIdentifier(std::string const&);
    ActorDefinitionIdentifier(ActorDefinitionIdentifier &&);
//  ActorDefinitionIdentifier(ActorType); //TODO: incomplete function definition
    ActorDefinitionIdentifier(char const*);
    void _initialize();
    void _getLegacyActorType()const;
    ~ActorDefinitionIdentifier();
    std::string getIdentifier()const;
    std::string getNamespace()const;
    ActorDefinitionIdentifier(ActorDefinitionIdentifier const&);
    void setInitEvent(std::string const&);
    void getCanonicalHash()const;
    void initialize(std::string const&);
    void setIdentifier(std::string const&);
    ActorDefinitionIdentifier();
    std::string getCanonicalName()const;
};
