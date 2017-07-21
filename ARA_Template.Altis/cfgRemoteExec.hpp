#define F(NAME,TARGET) class NAME { \
    allowedTargets = TARGET; \
};

#define ANYONE 0
#define CLIENT 1
#define SERVER 2

/*
--------- Basically this is a whitelist for scripts to be remotely executed on the server
// List of script functions allowed to be sent from client via remoteExec
class Functions
{
    mode = 1; // State of remoteExec: 0-turned off, 1-turned on, taking whitelist into account, 2-turned on, however, ignoring whitelists (default because of backward compatibility)
    jip = 1; // Ability to send jip messages: 0-disabled, 1-enabled (default)
    //your functions here
    F(ara_fnc_function,CLIENT) // can target only clients
    F(ara_fnc_function,SERVER) // can target only the server
};
// List of script commands allowed to be sent from client via remoteExec
class Commands
{
    mode = 1;
    jip = 0;
    //your commands here
    F(addWeapon,ANYONE)
    F(addMagazine,ANYONE)
};

*/

class CfgRemoteExec {
    class Functions {
        mode = 1;
        jip = 1;
    };

    class Commands {
        mode = 1;
        jip = 0;
    };
};