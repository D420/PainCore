#include "ScriptPCH.h"
#include "TicketMgr.h"

class gm_login : public PlayerScript
{
public:
	gm_login() : PlayerScript("gm_login") { }

	void OnLogin(Player* player)
	{
			if (player->GetSession()->GetSecurity() >= SEC_MODERATOR)
			{
				uint16 gmlvl = player->GetSession()->GetSecurity();
				std::string gmname = player->GetName();
				uint32 playeronline = sWorld->GetPlayerCount();
				std::string uptime = secsToTimeString(sWorld->GetUptime());
				std::string player_ip = player->GetSession()->GetRemoteAddress();
				uint16 tickets = sTicketMgr->GetOpenTicketCount();

				ChatHandler(player->GetSession()).PSendSysMessage("|cffff0000=================================|r");
				ChatHandler(player->GetSession()).PSendSysMessage("|cff00ff00Bienvenido,|r %s", gmname.c_str());
				ChatHandler(player->GetSession()).PSendSysMessage("|cff00ff00Tu nivel de cuenta es:|r %u", gmlvl);
				ChatHandler(player->GetSession()).PSendSysMessage("|cff00ff00Tu direcci""\xC3\xB3""n IP es:|r %s", player_ip.c_str()); 
				ChatHandler(player->GetSession()).PSendSysMessage("|cff00ff00En este momento hay|r %u |cff00ff00jugadores en l""\xC3\xAD""nea|r", playeronline);
				ChatHandler(player->GetSession()).PSendSysMessage("|cff00ff00Tickets abiertos:|r %u", tickets);
				ChatHandler(player->GetSession()).PSendSysMessage("|cff00ff00Servidor Online durante:|r %s", uptime.c_str());
				ChatHandler(player->GetSession()).PSendSysMessage("|cffff0000=================================|r");
				return;
			}
	}
};

void AddSC_gm_login()
{
	new gm_login();
}