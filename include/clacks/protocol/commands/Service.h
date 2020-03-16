#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                namespace Commands {

                    class Service /*public grpc::Service*/ { //TODO: incomplete class definition

                    public:
                        virtual ~Service(); // _ZN3com6mojang6clacks8protocol8Commands7ServiceD2Ev
                        virtual void __fake_function0(); // fake
                        virtual void listPlayer__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::PlayerList *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service10listPlayerEPN4grpc13ServerContextEPKNS2_5EmptyEPNS2_10PlayerListE
                        virtual void kick__incomplete0(long *, com::mojang::clacks::protocol::PlayerAndMessage const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service4kickEPN4grpc13ServerContextEPKNS2_16PlayerAndMessageEPNS2_5EmptyE
                        virtual void say__incomplete0(long *, com::mojang::clacks::protocol::Message const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service3sayEPN4grpc13ServerContextEPKNS2_7MessageEPNS2_5EmptyE
                        virtual void changeSettings__incomplete0(long *, com::mojang::clacks::protocol::Settings const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service14changeSettingsEPN4grpc13ServerContextEPKNS2_8SettingsEPNS2_5EmptyE
                        virtual void reloadOps__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service9reloadOpsEPN4grpc13ServerContextEPKNS2_5EmptyEPS8_
                        virtual void reloadPermissions__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service17reloadPermissionsEPN4grpc13ServerContextEPKNS2_5EmptyEPS8_
                        virtual void reloadWhitelist__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service15reloadWhitelistEPN4grpc13ServerContextEPKNS2_5EmptyEPS8_
                        virtual void saveHold__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service8saveHoldEPN4grpc13ServerContextEPKNS2_5EmptyEPS8_
                        virtual void saveQuery__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveQueryResult *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service9saveQueryEPN4grpc13ServerContextEPKNS2_5EmptyEPNS2_15SaveQueryResultE
                        virtual void saveResume__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service10saveResumeEPN4grpc13ServerContextEPKNS2_5EmptyEPS8_
                        virtual void saveState__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveStateResult *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service9saveStateEPN4grpc13ServerContextEPKNS2_5EmptyEPNS2_15SaveStateResultE
                        virtual void stop__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service4stopEPN4grpc13ServerContextEPKNS2_5EmptyEPS8_
                        virtual void serverStarted__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service13serverStartedEPN4grpc13ServerContextEPKNS2_5EmptyEPS8_
                        virtual void subscribeToMetrics__incomplete0(long *, com::mojang::clacks::protocol::Empty const*, long *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Commands7Service18subscribeToMetricsEPN4grpc13ServerContextEPKNS2_5EmptyEPNS5_12ServerWriterINS2_12MetricReportEEE
                        Service(); // _ZN3com6mojang6clacks8protocol8Commands7ServiceC2Ev
                    };
                }
            }
        }
    }
}
