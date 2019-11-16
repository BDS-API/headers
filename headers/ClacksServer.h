#pragma once

class ClacksServer : com::mojang::clacks::protocol::Commands::Service {

    virtual void ClacksServer::~ClacksServer();
    virtual void ClacksServer::~ClacksServer();
    virtual void listPlayer(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::PlayerList *);
    virtual void kick(grpc::ServerContext *, com::mojang::clacks::protocol::PlayerAndMessage const*, com::mojang::clacks::protocol::Empty *);
    virtual void say(grpc::ServerContext *, com::mojang::clacks::protocol::Message const*, com::mojang::clacks::protocol::Empty *);
    virtual void changeSettings(grpc::ServerContext *, com::mojang::clacks::protocol::Settings const*, com::mojang::clacks::protocol::Empty *);
    virtual void reloadOps(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void reloadPermissions(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void reloadWhitelist(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void saveHold(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void saveQuery(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveQueryResult *);
    virtual void saveResume(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void saveState(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveStateResult *);
    virtual void stop(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void serverStarted(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void subscribeToMetrics(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, grpc::ServerWriter<com::mojang::clacks::protocol::MetricReport> *);
}
