#pragma once

#include <memory>
#include "../clacks/protocol/commands/Service.h"


class ClacksServer : com::mojang::clacks::protocol::Commands::Service {

public:
    class ExecutionAndResult;

    ~ClacksServer(); // _ZN12ClacksServerD2Ev
//  virtual void listPlayer(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::PlayerList *); //TODO: incomplete function definition // _ZN12ClacksServer10listPlayerEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPNS6_10PlayerListE
//  virtual void kick(grpc::ServerContext *, com::mojang::clacks::protocol::PlayerAndMessage const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer4kickEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol16PlayerAndMessageEPNS6_5EmptyE
//  virtual void say(grpc::ServerContext *, com::mojang::clacks::protocol::Message const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer3sayEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol7MessageEPNS6_5EmptyE
//  virtual void changeSettings(grpc::ServerContext *, com::mojang::clacks::protocol::Settings const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer14changeSettingsEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol8SettingsEPNS6_5EmptyE
//  virtual void reloadOps(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer9reloadOpsEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPS7_
//  virtual void reloadPermissions(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer17reloadPermissionsEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPS7_
//  virtual void reloadWhitelist(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer15reloadWhitelistEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPS7_
//  virtual void saveHold(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer8saveHoldEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPS7_
//  virtual void saveQuery(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveQueryResult *); //TODO: incomplete function definition // _ZN12ClacksServer9saveQueryEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPNS6_15SaveQueryResultE
//  virtual void saveResume(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer10saveResumeEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPS7_
//  virtual void saveState(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveStateResult *); //TODO: incomplete function definition // _ZN12ClacksServer9saveStateEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPNS6_15SaveStateResultE
//  virtual void stop(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer4stopEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPS7_
//  virtual void serverStarted(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN12ClacksServer13serverStartedEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPS7_
//  virtual void subscribeToMetrics(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, grpc::ServerWriter<com::mojang::clacks::protocol::MetricReport> *); //TODO: incomplete function definition // _ZN12ClacksServer18subscribeToMetricsEPN4grpc13ServerContextEPKN3com6mojang6clacks8protocol5EmptyEPNS0_12ServerWriterINS6_12MetricReportEEE
    ClacksServer(DedicatedServer &, NetworkAddress const&, ServerInstance &, PermissionsFile &, WhitelistFile &, ServerMetricsImpl &); // _ZN12ClacksServerC2ER15DedicatedServerRK14NetworkAddressR14ServerInstanceR15PermissionsFileR13WhitelistFileR17ServerMetricsImpl
    void run(); // _ZN12ClacksServer3runEv
    void stop(); // _ZN12ClacksServer4stopEv
//  void emptyClacksResponse(std::shared_ptr<ClacksServer::ExecutionAndResult> const&, gsl::basic_string_span<char const, -1l>, com::mojang::clacks::protocol::Empty &); //TODO: incomplete function definition // _ZN12ClacksServer19emptyClacksResponseERKSt10shared_ptrINS_18ExecutionAndResultEEN3gsl17basic_string_spanIKcLln1EEERN3com6mojang6clacks8protocol5EmptyE
    class ExecutionAndResult {

    public:
        ExecutionAndResult(); // _ZN12ClacksServer18ExecutionAndResultC2Ev
        ~ExecutionAndResult(); // _ZN12ClacksServer18ExecutionAndResultD2Ev
    };
};
