#pragma once



class ServerInstanceEventCoordinator {

public:
    ~ServerInstanceEventCoordinator(); // _ZN30ServerInstanceEventCoordinatorD2Ev
    ServerInstanceEventCoordinator(); // _ZN30ServerInstanceEventCoordinatorC2Ev
    void sendServerInitializeStart(ServerInstance &); // _ZN30ServerInstanceEventCoordinator25sendServerInitializeStartER14ServerInstance
    void sendServerInitializeEnd(ServerInstance &); // _ZN30ServerInstanceEventCoordinator23sendServerInitializeEndER14ServerInstance
    void sendServerMinecraftInitialized(ServerInstance &, Minecraft &); // _ZN30ServerInstanceEventCoordinator30sendServerMinecraftInitializedER14ServerInstanceR9Minecraft
    void sendServerLevelInitialized(ServerInstance &, Level &); // _ZN30ServerInstanceEventCoordinator26sendServerLevelInitializedER14ServerInstanceR5Level
    void sendServerUpdateStart(ServerInstance &); // _ZN30ServerInstanceEventCoordinator21sendServerUpdateStartER14ServerInstance
    void sendServerUpdateEnd(ServerInstance &); // _ZN30ServerInstanceEventCoordinator19sendServerUpdateEndER14ServerInstance
    void sendServerSuspend(ServerInstance &); // _ZN30ServerInstanceEventCoordinator17sendServerSuspendER14ServerInstance
    void sendServerResume(ServerInstance &); // _ZN30ServerInstanceEventCoordinator16sendServerResumeER14ServerInstance
    void sendServerThreadStarted(ServerInstance &); // _ZN30ServerInstanceEventCoordinator23sendServerThreadStartedER14ServerInstance
    void sendServerThreadStopped(ServerInstance &); // _ZN30ServerInstanceEventCoordinator23sendServerThreadStoppedER14ServerInstance
    void sendStartLeaveGame(ServerInstance &); // _ZN30ServerInstanceEventCoordinator18sendStartLeaveGameER14ServerInstance
    void sendLeaveGameDone(ServerInstance &); // _ZN30ServerInstanceEventCoordinator17sendLeaveGameDoneER14ServerInstance
};
