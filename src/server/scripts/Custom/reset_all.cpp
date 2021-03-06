#include "ScriptPCH.h"
 
class reset_all : public PlayerScript
{
public:
    reset_all() : PlayerScript("reset_all")
    {
    }
 
    void OnDuelStart(Player* player1, Player* player2)
    {
        player1->SetHealth(player1->GetMaxHealth());
        player2->SetHealth(player2->GetMaxHealth());
 
        switch (player1->getPowerType())
        {
            case POWER_MANA:
                player1->SetPower(POWER_MANA, player1->GetMaxPower(POWER_MANA));
                break;
            case POWER_RAGE:
                player1->SetPower(POWER_RAGE, 0);
                break;
            case POWER_RUNIC_POWER:
                player1->SetPower(POWER_RUNIC_POWER, 0);
                break;
        }
 
        switch (player2->getPowerType())
        {
            case POWER_MANA:
                player2->SetPower(POWER_MANA, player2->GetMaxPower(POWER_MANA));
                break;
            case POWER_RAGE:
                player2->SetPower(POWER_RAGE, 0);
                break;
            case POWER_RUNIC_POWER:
                player2->SetPower(POWER_RUNIC_POWER, 0);
                break;
        }
    }
 
    void OnDuelEnd(Player* winner, Player* looser, DuelCompleteType type)
    {
        if (type == DUEL_WON)
        {
            winner->RemoveArenaSpellCooldowns();
            looser->RemoveArenaSpellCooldowns();
            winner->SetHealth(winner->GetMaxHealth());
            looser->SetHealth(looser->GetMaxHealth());
 
            if (winner->getPowerType() == POWER_MANA)
                winner->SetPower(POWER_MANA, winner->GetMaxPower(POWER_MANA));
            if (looser->getPowerType() == POWER_MANA)
                looser->SetPower(POWER_MANA, looser->GetMaxPower(POWER_MANA));
        }
    }
};
 
void AddSC_reset_all()
{
    new reset_all();
}