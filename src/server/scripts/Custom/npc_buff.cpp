/*******************************************************************************************
* Créditos: Khanx & Ray                                                                    *
********************************************************************************************/
#include "ScriptPCH.h"

class Buff_Ally : public CreatureScript
{
private:
	bool spell_48469,
         spell_53307,
         spell_42995,
         spell_20217,
         spell_48932,
         spell_48936,
		 spell_48073,
         spell_48161,
		 spell_48169,
         spell_48470,
         spell_43002,
		 spell_25898,
		 spell_48934,
		 spell_25899,
		 spell_48938,
		 spell_48162,
		 spell_48170,
		 spell_48074;

	void SendSubMenu1(Player *player, Creature *creature)
	{

		spell_48469 = false;
        spell_53307 = false;
        spell_42995 = false;
        spell_20217 = false;
        spell_48932 = false;
        spell_48936 = false;
		spell_48073 = false;
        spell_48161 = false;
		spell_48169 = false;

		if(!player->HasAura(48469) && !spell_48469)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_nature_regeneration:26:26:-15:0|t|r Marca de lo Salvaje"                , GOSSIP_SENDER_MAIN, 1001);
		if(!player->HasAura(53307) && !spell_53307)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_nature_thorns:26:26:-15:0|t|r Espinas"                          , GOSSIP_SENDER_MAIN, 1005);
		if(!player->HasAura(42995) && !spell_42995)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_holy_magicalsentry:26:26:-15:0|t|r Intelecto Arcano"                , GOSSIP_SENDER_MAIN, 1015);
		if(!player->HasAura(20217) && !spell_20217)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_magic_magearmor:26:26:-15:0|t|r Bendicion de Reyes"               , GOSSIP_SENDER_MAIN, 1030);
		if(!player->HasAura(48932) && !spell_48932)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_fistofjustice:26:26:-15:0|t|r Bendicion de Poderio"               , GOSSIP_SENDER_MAIN, 1035);
		if(!player->HasAura(48936) && !spell_48936)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_sealofwisdom:26:26:-15:0|t|r Bendicion de Sabiduria"              , GOSSIP_SENDER_MAIN, 1040);
		if(!player->HasAura(48073) && !spell_48073)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_holy_divinespirit:26:26:-15:0|t|r Espiritu Divino"                   , GOSSIP_SENDER_MAIN, 1045);
		if(!player->HasAura(48161) && !spell_48161)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_wordfortitude:26:26:-15:0|t|r Palabra de poder: entereza"           , GOSSIP_SENDER_MAIN, 1050);
		if(!player->HasAura(48169) && !spell_48169)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_shadow_antishadow:26:26:-15:0|t|r Proteccion contra las Sombras"               , GOSSIP_SENDER_MAIN, 1055);

		player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,creature->GetGUID());		
	}

	void SendSubMenu2(Player *player, Creature *creature)
	{
		
		 spell_48169 = false;
         spell_48470 = false;
         spell_43002 = false;
		 spell_25898 = false;
		 spell_48934 = false;
		 spell_25899 = false;
		 spell_48938 = false;
		 spell_48162 = false;
		 spell_48170 = false;
		 spell_48074 = false;
		 
		if(!player->HasAura(48470) && !spell_48470)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_nature_giftofthewild:26:26:-15:0|t|r Don de lo Salvaje"                , GOSSIP_SENDER_MAIN, 2001);
		if(!player->HasAura(43002) && !spell_43002)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_arcaneintellect:26:26:-15:0|t|r Luminosidad Arcana"               , GOSSIP_SENDER_MAIN, 2005);
		if(!player->HasAura(25898) && !spell_25898)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_magic_greaterblessingofkings:26:26:-15:0|t|r Bendicion de Reyes superior"       , GOSSIP_SENDER_MAIN, 2015);
		if(!player->HasAura(48934) && !spell_48934)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_greaterblessingofkings:26:26:-15:0|t|r Bendicion de Poderio superior"       , GOSSIP_SENDER_MAIN, 2020);
		if(!player->HasAura(25899) && !spell_25899)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_nature_lightningshield:26:26:-15:0|t|r Bendicion de Salvaguardia superior"   , GOSSIP_SENDER_MAIN, 2025);
		if(!player->HasAura(48938) && !spell_48938)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_holy_greaterblessingofwisdom:26:26:-15:0|t|r Bendicion de Sabiduria superior"      , GOSSIP_SENDER_MAIN, 2030);
		if(!player->HasAura(48162) && !spell_48162)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_prayeroffortitude:26:26:-15:0|t|r Rezo de Entereza"             , GOSSIP_SENDER_MAIN, 2035);
		if(!player->HasAura(48170) && !spell_48170)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_holy_prayerofshadowprotection:26:26:-15:0|t|r Rezo de Proteccion contra las Sombras"     , GOSSIP_SENDER_MAIN, 2040);
		if(!player->HasAura(48074) && !spell_48074)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_prayerofspirit:26:26:-15:0|t|r Rezo de Espiritu"                , GOSSIP_SENDER_MAIN, 2045);

		player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,creature->GetGUID());
		
	}
	
public:
        Buff_Ally() : CreatureScript("Buff_Ally") { }
		
    bool OnGossipHello(Player* player, Creature* creature)
    {
	if (player->GetTeam() == ALLIANCE)
	{
		player->ADD_GOSSIP_ITEM(9, "Buffo Menor ->", GOSSIP_SENDER_MAIN, 1000);
		player->ADD_GOSSIP_ITEM(9, "Buffo Mayor ->", GOSSIP_SENDER_MAIN, 2000);
		//player->ADD_GOSSIP_ITEM( 2, "Olvidalo", GOSSIP_SENDER_MAIN, 2050);
	}
	else // Main Menu for Horde
	{
		player->GetSession()->SendNotification("|cff87CEFATu no eres uno de los nuestros. ""\xc2\xa1""L""\xC3\xA1""rgate escoria Horda!|r");
		player->CLOSE_GOSSIP_MENU();
    }
		player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        return true;
	}
	
    bool OnGossipSelect(Player* player, Creature* creature, uint32 /*uiSender*/, uint32 uiAction)
    {

	player->PlayerTalkClass->ClearMenus();
        switch (uiAction)
        {
			case 1000: //Small  Buff
				SendSubMenu1(player, creature);
			break;

			case 2000: //Great Buff
				SendSubMenu2(player, creature);
			break;
			
			/*case 2050: //Menu olvidalo
				player->CLOSE_GOSSIP_MENU();
			break;*/
		
			case 1001: // Buff me Mark of the Wild
				creature->CastSpell(player,48469,true);
				spell_48469 = true;
			break;
		
			case 1005: // Buff me Thorns
				creature->CastSpell(player,53307,true);
				spell_53307 = true;
			break;

			case 1015: // Buff me Arcane Intellect
				creature->CastSpell(player,42995,true);
				spell_42995 = true;
			break;

			case 1030: // Buff me Blessing of Kings
				creature->CastSpell(player,20217,true);
				spell_20217 = true;
			break;

			case 1035: // Buff me Blessing of Might
				creature->CastSpell(player,48932,true);
				spell_48932 = true;
			break;

			case 1040: // Buff me Blessing of Wisdom
				creature->CastSpell(player,48936,true);
				spell_48936 = true;
			break;

			case 1045: // Buff me Divine Spirit
				creature->CastSpell(player,48073,true);
				spell_48073 = true;
			break;

			case 1050: // Buff me Power Word: Fortitude
				creature->CastSpell(player,48161,true);
				spell_48161 = true;
			break;

			case 1055: // Buff me Shadow Protection
				creature->CastSpell(player,48169,true);
				spell_48169 = true;
			break;

//////////////////////////////////////////////////Buffos mayores///////////////////////////////////////////////////////////////

			case 2001: // Buff me Gift of the Wild
				player->CastSpell(player,48470,true);
				spell_48470 = true;
			break;

			case 2005: // Buff me Arcane Brilliance
				player->CastSpell(player,43002,true);
				spell_43002 = true;
			break;


			case 2015: // Buff me Greater Blessing of Kings
				creature->CastSpell(player,25898,true);
				spell_25898 = true;
			break;

			case 2020: // Buff me Greater Blessing of Might
				creature->CastSpell(player,48934,true);
				spell_48934 = true;
			break;

			case 2025: // Buff me Greater Blessing of Sanctuary
				creature->CastSpell(player,25899,true);
				spell_25899 = true;
			break;

			case 2030: // Buff me Greater Blessing of Wisdom
				creature->CastSpell(player,48938,true);
				spell_48938 = true;
			break;
			
			case 2035: // Buff me Prayer of Fortitude
				player->CastSpell(player,48162,true);
				spell_48162 = true;
			break;

			case 2040: // Buff me Prayer of Shadow Protection
				player->CastSpell(player,48170,true);
				spell_48170 = true;
			break;

			case 2045: // Buff me Prayer of Spirit
				player->CastSpell(player,48074,true);
				spell_48074 = true;
			break;
		}

		if (uiAction>1000 && uiAction<2000)
			SendSubMenu1(player, creature);
		if (uiAction>2000)
			SendSubMenu2(player, creature);
		return true;
    }
};


class Buff_Horde : public CreatureScript
{
private:
	bool spell_48469,
         spell_53307,
         spell_42995,
         spell_20217,
         spell_48932,
         spell_48936,
		 spell_48073,
         spell_48161,
		 spell_48169,
         spell_48470,
         spell_43002,
         spell_61316,
		 spell_25898,
		 spell_48934,
		 spell_25899,
		 spell_48938,
		 spell_48162,
		 spell_48170,
		 spell_48074;

	void SendSubMenu1(Player *player, Creature *creature)
	{
		spell_48469 = false;
        spell_53307 = false;
        spell_42995 = false;
        spell_20217 = false;
        spell_48932 = false;
        spell_48936 = false;
		spell_48073 = false;
        spell_48161 = false;
		spell_48169 = false;

		if(!player->HasAura(48469) && !spell_48469)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_nature_regeneration:26:26:-15:0|t|r Marca de lo Salvaje"                , GOSSIP_SENDER_MAIN, 1001);
		if(!player->HasAura(53307) && !spell_53307)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_nature_thorns:26:26:-15:0|t|r Espinas"                          , GOSSIP_SENDER_MAIN, 1005);
		if(!player->HasAura(42995) && !spell_42995)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_holy_magicalsentry:26:26:-15:0|t|r Intelecto Arcano"                , GOSSIP_SENDER_MAIN, 1015);
		if(!player->HasAura(20217) && !spell_20217)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_magic_magearmor:26:26:-15:0|t|r Bendicion de Reyes"               , GOSSIP_SENDER_MAIN, 1030);
		if(!player->HasAura(48932) && !spell_48932)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_fistofjustice:26:26:-15:0|t|r Bendicion de Poderio"               , GOSSIP_SENDER_MAIN, 1035);
		if(!player->HasAura(48936) && !spell_48936)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_sealofwisdom:26:26:-15:0|t|r Bendicion de Sabiduria"              , GOSSIP_SENDER_MAIN, 1040);
		if(!player->HasAura(48073) && !spell_48073)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_holy_divinespirit:26:26:-15:0|t|r Espiritu Divino"                   , GOSSIP_SENDER_MAIN, 1045);
		if(!player->HasAura(48161) && !spell_48161)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_wordfortitude:26:26:-15:0|t|r Palabra de poder: entereza"           , GOSSIP_SENDER_MAIN, 1050);
		if(!player->HasAura(48169) && !spell_48169)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_shadow_antishadow:26:26:-15:0|t|r Proteccion contra las Sombras"               , GOSSIP_SENDER_MAIN, 1055);

		player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,creature->GetGUID());		
	}

	void SendSubMenu2(Player *player, Creature *creature)
	{
		spell_48169 = false;
        spell_48470 = false;
        spell_43002 = false;
		spell_25898 = false;
		spell_48934 = false;
		spell_25899 = false;
		spell_48938 = false;
		spell_48162 = false;
		spell_48170 = false;
		spell_48074 = false;
		
		if(!player->HasAura(48470) && !spell_48470)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_nature_giftofthewild:26:26:-15:0|t|r Don de lo Salvaje"                , GOSSIP_SENDER_MAIN, 2001);
		if(!player->HasAura(43002) && !spell_43002)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_arcaneintellect:26:26:-15:0|t|r Luminosidad Arcana"               , GOSSIP_SENDER_MAIN, 2005);
		if(!player->HasAura(25898) && !spell_25898)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_magic_greaterblessingofkings:26:26:-15:0|t|r Bendicion de Reyes superior"       , GOSSIP_SENDER_MAIN, 2015);
		if(!player->HasAura(48934) && !spell_48934)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_greaterblessingofkings:26:26:-15:0|t|r Bendicion de Poderio superior"       , GOSSIP_SENDER_MAIN, 2020);
		if(!player->HasAura(25899) && !spell_25899)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_nature_lightningshield:26:26:-15:0|t|r Bendicion de Salvaguardia superior"   , GOSSIP_SENDER_MAIN, 2025);
		if(!player->HasAura(48938) && !spell_48938)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_holy_greaterblessingofwisdom:26:26:-15:0|t|r Bendicion de Sabiduria superior"      , GOSSIP_SENDER_MAIN, 2030);
		if(!player->HasAura(48162) && !spell_48162)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_prayeroffortitude:26:26:-15:0|t|r Rezo de Entereza"             , GOSSIP_SENDER_MAIN, 2035);
		if(!player->HasAura(48170) && !spell_48170)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\Spell_holy_prayerofshadowprotection:26:26:-15:0|t|r Rezo de Proteccion contra las Sombras"     , GOSSIP_SENDER_MAIN, 2040);
		if(!player->HasAura(48074) && !spell_48074)
		player->ADD_GOSSIP_ITEM( 3, "|cff00ff00|TInterface\\icons\\spell_holy_prayerofspirit:26:26:-15:0|t|r Rezo de Espiritu"                , GOSSIP_SENDER_MAIN, 2045);

		player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,creature->GetGUID());
	}

public:
        Buff_Horde() : CreatureScript("Buff_Horde") { }

    bool OnGossipHello(Player* player, Creature* creature)
    {
	if (player->GetTeam() == HORDE)
	{
		player->ADD_GOSSIP_ITEM(9, "Buffo Menor ->", GOSSIP_SENDER_MAIN, 1000);
		player->ADD_GOSSIP_ITEM(9, "Buffo Mayor ->", GOSSIP_SENDER_MAIN, 2000);
		//player->ADD_GOSSIP_ITEM( 2, "Olvidalo", GOSSIP_SENDER_MAIN, 2050);
	}
	else // Main Menu for Horde
	{
		player->GetSession()->SendNotification("|cff87CEFATu no eres uno de los nuestros. ""\xc2\xa1""L""\xC3\xA1""rgate sucio Alianza!|r");
		player->CLOSE_GOSSIP_MENU();
    }
		player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        return true;
	}
	
    bool OnGossipSelect(Player* player, Creature* creature, uint32 /*uiSender*/, uint32 uiAction)
    {
		player->PlayerTalkClass->ClearMenus();
        switch (uiAction)
        {
			case 1000: //Small  Buff
				SendSubMenu1(player, creature);
			break;

			case 2000: //Great Buff
				SendSubMenu2(player, creature);
			break;
			
			/*case 2050: //Menu olvidalo
				player->CLOSE_GOSSIP_MENU();
			break;*/
		
			case 1001: // Buff me Mark of the Wild
				creature->CastSpell(player,48469,true);
				spell_48469 = true;
			break;
		
			case 1005: // Buff me Thorns
				creature->CastSpell(player,53307,true);
				spell_53307 = true;
			break;

			case 1015: // Buff me Arcane Intellect
				creature->CastSpell(player,42995,true);
				spell_42995 = true;
			break;

			case 1030: // Buff me Blessing of Kings
				creature->CastSpell(player,20217,true);
				spell_20217 = true;
			break;

			case 1035: // Buff me Blessing of Might
				creature->CastSpell(player,48932,true);
				spell_48932 = true;
			break;

			case 1040: // Buff me Blessing of Wisdom
				creature->CastSpell(player,48936,true);
				spell_48936 = true;
			break;

			case 1045: // Buff me Divine Spirit
				creature->CastSpell(player,48073,true);
				spell_48073 = true;
			break;

			case 1050: // Buff me Power Word: Fortitude
				creature->CastSpell(player,48161,true);
				spell_48161 = true;
			break;

			case 1055: // Buff me Shadow Protection
				creature->CastSpell(player,48169,true);
				spell_48169 = true;
			break;

//////////////////////////////////////////////////Buffos mayores///////////////////////////////////////////////////////////////

			case 2001: // Buff me Gift of the Wild
				player->CastSpell(player,48470,true);
				spell_48470 = true;
			break;

			case 2005: // Buff me Arcane Brilliance
				player->CastSpell(player,43002,true);
				spell_43002 = true;
			break;


			case 2015: // Buff me Greater Blessing of Kings
				creature->CastSpell(player,25898,true);
				spell_25898 = true;
			break;

			case 2020: // Buff me Greater Blessing of Might
				creature->CastSpell(player,48934,true);
				spell_48934 = true;
			break;

			case 2025: // Buff me Greater Blessing of Sanctuary
				creature->CastSpell(player,25899,true);
				spell_25899 = true;
			break;

			case 2030: // Buff me Greater Blessing of Wisdom
				creature->CastSpell(player,48938,true);
				spell_48938 = true;
			break;
			
			case 2035: // Buff me Prayer of Fortitude
				player->CastSpell(player,48162,true);
				spell_48162 = true;
			break;

			case 2040: // Buff me Prayer of Shadow Protection
				player->CastSpell(player,48170,true);
				spell_48170 = true;
			break;

			case 2045: // Buff me Prayer of Spirit
				player->CastSpell(player,48074,true);
				spell_48074 = true;
			break;
		}

		if (uiAction>1000 && uiAction<2000)
			SendSubMenu1(player, creature);
		if (uiAction>2000)
			SendSubMenu2(player, creature);
		return true;
    }
};
 
void AddSC_npc_buff()
{
    new Buff_Horde();
	new Buff_Ally();
}